#include<unistd.h>
#include <stdio.h>
int main(){
int pid;
pid = fork();
if(pid<0)
printf("fork not succesful");
else if(pid==0){
printf("child process\n");
printf("the process is %d\n",getpid());
printf("the parent process id is %d\n",getppid());

}
else{
printf("parent process\n");
printf("the process id is %d\n",getpid());
printf("the process id is %d\n",getppid());
}
}
