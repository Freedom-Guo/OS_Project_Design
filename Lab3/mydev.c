#include "linux/kernel.h"
#include "linux/module.h"
#include "linux/fs.h"
#include "linux/init.h"
#include "linux/types.h"
#include "linux/errno.h"
#include "linux/uaccess.h"
#include "linux/kdev_t.h"

//The max of my device, if beyoud, read and write will fail!
#define MY_DEV_SIZE 1024

//Add the device to kernel
int mydev_open(struct inode *inode, struct file *pfile);
//Delete the device from kernel
int mydev_release(struct inode *inode, struct file *pfile);
//Read data from kernel to user space
ssize_t mydev_read(struct file *pfile, char __user *user, size_t t, loff_t *f);
//Write data from user space to kernel
ssize_t mydev_write(struct file *pfile, const char __user *user, size_t t, loff_t *f);

char message[MY_DEV_SIZE]="This is my message";
//The number of my device
int dev_num;
//The name of my device
char * dev_name="MyDevice";

//Function pointer, the kinds of the device operation
struct file_operations pStruct =
{
    open:mydev_open,
    release:mydev_release,
    read:mydev_read,
    write:mydev_write
};

//Initialize the drive of my device
int init_module()
{
    int ret;
    ret = register_chrdev(0,dev_name,&pStruct);
    
    if(ret<0)
    {
        printk("Failed to register_chrdev.\n");
        return -1;
    }
    else
    {
        printk("MyDrive has been registered!\n");
        printk("id:%d\n",ret);
        dev_num=ret;
        return 0;
    }
}

//Release the drive of my device
void cleanup_module()
{
    unregister_chrdev(dev_num,dev_name);
    printk("Unregister successful!\n");
}

//Add the device to kernel
int mydev_open(struct inode *inode, struct file *pfile)
{
    printk("Open My Device!");
    //the count of module ++
    try_module_get(THIS_MODULE);
    return 0;
}

//Delete the device from kernel
int mydev_release(struct inode *inode, struct file *pfile)
{
    printk("Release My Device!\n");
    module_put(THIS_MODULE);
    return 0;
}

//Read data from kernel to user space
ssize_t mydev_read(struct file *pfile, char __user *user, size_t t, loff_t *f)
{
    if(copy_to_user(user,message,sizeof(message)))
        return -2;
    return sizeof(message);
}

//Write data from user space to kernel
ssize_t mydev_write(struct file *pfile, const char __user *user, size_t t, loff_t *f)
{
    if(copy_from_user(message,user,sizeof(message)))
        return -3;
    return sizeof(message);
}
