/*
1. Write a program which accepts file name from user and count number of 
capital characters from that file.

Input : Demo.txt

Output : Number of capital characters are 23
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int CountCapital(char FName[])
{
// Open file in read mode
// Read the data into local array
// Count capital characters
// Close the file
// Return its frequency.
	int fd=0,iRet=0,iCnt=0,i=0;
	char Buffer[10];
	
	//printf("Enter a file name:");
	//scanf("%s",FName);
	fd = open(FName,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open the file.");
	}
	
	while((iRet = read(fd,Buffer,10))!=0)
	{
	for(i=0;i<iRet;i++)
		{
			if(Buffer[i]>='A' && Buffer[i]<='Z')
			{
				iCnt++;
			}
		}
	}	
	return iCnt;
	
	close(fd);
	
}

int main()
{
	char FileName[30];
	int iRet = 0;
	
	printf("Enter file name:");
	scanf("%s",FileName);
	
	iRet = CountCapital(FileName);
	
	printf("Number of Capital characters are %d",iRet);
	
	return 0;
	
}