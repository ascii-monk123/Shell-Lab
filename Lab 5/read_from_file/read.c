#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>

void main(){
int fd=open("assassins.txt",O_RDONLY);
char*buf;
ssize_t file=read(fd,buf,10);
for(int i=0;i<file;i++){
	printf("%c",*(buf+i));
}

}