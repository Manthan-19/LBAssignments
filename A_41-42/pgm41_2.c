/*
2. Write application which accept file name from user and create that file.
Input : Demo.txt
Output : File created successfully
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char fName[30];
	
	printf("Enter file name: ");
	scanf("%s",fName);
	
	fd = creat(fName,0777);
	
	if(fd == -1)
	{
		printf("Unable to create a file.");
	}
	else
	{
		printf("File created successfully.");
	}
	
	close(fd);
	return 0;
}