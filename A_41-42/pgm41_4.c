/*
4. Write application which accept file name from user and display size of file.

Input : Demo.txt

Output : File size is 56 bytes
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd=0,fd2;
	char fName[30];
	
	printf("Enter a file name: ");
	scanf("%s",fName);
	
	fd = open(fName,O_RDONLY);
	
	if(fd == -1)
	{
		printf("File cannot be found!!");
	}
	
	else
	{
		fd2 = lseek(fd,sizeof(fName),SEEK_SET);
		printf("File size is: %d",fd2);
	}
	close(fd);
	return 0;
}