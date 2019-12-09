// /test.c
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define MY_DEV_SIZE 1024

int main(void){
	int fd;
	int j;
	int pos;
	int i=0;
	int flag=0;
	char buf[MY_DEV_SIZE];//buffer
	char get[MY_DEV_SIZE];//the message of writting
	char c;
	char dir[50]="/dev/MyDevice";
	char order[50]={0};
	fd =open(dir,O_RDWR|O_NONBLOCK);
	i=0;
	if(fd!=-1)
    {
		read(fd,buf,sizeof(buf));
		printf("%s\n", buf);
		printf("input :");
		while((c=getchar())!='\n')
        {
			get[i]=c;
			i++;
		}
		get[i]='\0';
		i=0;
		while(get[i]!=' '&&get[i]!='\0')
        {
			order[i]=get[i];
			i++;
		}
		order[i++]='\0';
		if(strcmp(order,"clean")==0)
        {
			j=0;
			while(buf[j]!='\0'){
				buf[j]='\0';
			}
			flag=1;
		}
		else if(strcmp(order,"add")==0)
        {
			j=0;
			
			while(get[i+j]!='\0'){
				get[j]=get[i+j];
				j++;
			}
			get[j++]='\0';
			flag=1;
			strcat(buf,get);
		}
		if(flag==0)
			write(fd,get,sizeof(get));
		else write(fd,buf,sizeof(buf));
		read(fd,buf,sizeof(buf));
		printf("Device Message: %s\n",buf);
		close(fd);
		return 0;
	}
	else
    {
		printf("Device open failed\n");
		return -1;
	}

}

