#include<stdio.h>

#define CHILD 0

int main()
{
      	int status;

	printf("%d\n",getpid());

	int pid = fork();
	
        if(pid == CHILD)
	{
	  printf("This is child pid: %d \n",getpid());
	}
	else
	{

           wait(&status);
	
           printf("This is parent Pid: %d \n",getpid());
	}
           
	//  while(1);
}
