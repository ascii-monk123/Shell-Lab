#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>

void main(){
	int fd=open("students.txt",O_RDONLY);
	char*buf;
	ssize_t t =read(fd,char,20);
	for(int i=0;i<t;i++){
		printf("%c",*(buf+i));
	}
}