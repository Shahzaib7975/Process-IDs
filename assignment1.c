#include<cstdio>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(){
int id=fork();
printf("Current ID: %d\n",getpid());
printf("Parent ID: %d\n",getppid());
return 0;
}
