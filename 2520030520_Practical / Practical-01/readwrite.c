#include<fcntl.h>
#include<unistd.h>
int main(){
int fd1,fd2;
char buf[100];
ssize_t n;
fd1=open("a1",O_RDONLY);
fd2=open("x1",O_WRONLY);
while((n=read(fd1,buf,sizeof(buf)))>0)
{write(fd2,buf,n);
write(1,buf,n);
}}
