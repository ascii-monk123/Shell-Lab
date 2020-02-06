#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
int main(){
int fd=open("config.txt",O_WRONLY);
char c[100]="Configuration";
int size=strlen(c);
char *buf=c;
ssize_t t=write(fd,buf,size);
}