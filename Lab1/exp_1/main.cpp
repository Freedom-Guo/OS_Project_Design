// /OsExp/lab1/exp_1/main.c
//Function: Copy file
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
//struct stat about files
#include <sys/stat.h>
//some function about files, like open, close and so on
#include <fcntl.h>
#include <unistd.h>

/* 首先判断是否命令行输入正确，即判断是否输入被拷贝文件以及拷贝文件的路径。然后通过open函数打开文件，获得被拷贝文件的文件描述符，判断是否存在，如果不存在则报错直接结束;再打开拷贝文件，如果不存在则创建一个新的，如果存在则把之前的数据给清掉，打开失败同样报错直接结束;然后通过read从被拷贝文件中读出缓冲区大小的数据，再利用write将缓冲区的数据写入拷贝文件中，直到文件尾结束，关闭两个文件，拷贝结束。
 */

int main(int argc, char *argv[])
{
    //The buffer space
    char buffer[1024];
    //The path of two files, file 1 is read, and file 2 is written.
    const char *pathname_1 = argv[1];
    const char *pathname_2 = argv[2];
    int flag;
    //The struct of file, include information about files
    struct stat file_struct;
    //Obtain the information about the file 1
    lstat(pathname_1, &file_struct);
    //When the number of inputs is less than 3, outputs error
    if(argc<3)
    {
        printf("INPUT ERROR\n");
        return -1;
    }
    //Open file 1, and judge existence of the file
    int f_read = open(pathname_1, O_RDONLY, file_struct.st_mode);
    //Open file 1 fail!
    if (f_read == -1)
    {
        printf("Cannot open %s !\n", pathname_1);
        return -1;
    }
    //Open or create file 2, and judge the file was created whether or not
    int f_write = open(pathname_2, O_RDWR|O_CREAT|O_TRUNC, file_struct.st_mode);
    //Open file 2 fail!
    if (f_write == -1)
    {
        printf("Cannot create %s !\n", pathname_2);
        return -1;
    }
    //Write the data from buffer to the file 2
    while((flag = (int)read(f_read, buffer, 1024))>0)
    {
        write(f_write, buffer, flag);
    }
    //Close the files!
    close(f_read);
    close(f_write);
}
