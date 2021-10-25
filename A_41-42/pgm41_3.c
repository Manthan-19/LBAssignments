/*
3. Write application which accept file name from user and read all data from that file 
and display contents on screen.

Input : Demo.txt

Output : Display all data of file.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd=0,iRet=0;
	char fName[30];
	char Data[iRet];
	
	printf("Enter a file name:");
	scanf("%s",fName);
	fd = open(fName,O_RDONLY);
	if(fd == -1)
	{
		printf("Unable to oepn the file.");
		
	}
	else
	{
		iRet = read(fd,Data,sizeof(fName)-1);
		printf("Data is : %s ",Data);
	}
	close(fd);
	return 0;
}