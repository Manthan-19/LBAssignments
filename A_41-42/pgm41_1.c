/*
1. Write application which accept file name from user and open that file in read mode.
Input : Demo.txt
Output : File opened successfully.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd1 = 0 , fd2=0;
	char Fname[30];
	
	printf("Enter a file name:");
	scanf("%s",Fname);
	fd1 = creat(Fname,0777);
	fd2 = open(Fname,O_RDWR);
	
	if(fd2 == -1)
	{
		printf("Unable to open a file");
	}
	else
	{
		printf("File opened successfully.");
	}
	
	close(fd);
	return 0;
	
}
