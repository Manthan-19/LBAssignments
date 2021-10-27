/*
4. Write a program which accepts file name and one character from user and 
count number of occurrences of that characters from that file.

Input : Demo.txt ‘M’

Output : Frequency of M is 7
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int CountChar(char FName[],char ch)
{
// Open file in read mode
// Read the data into local array
// Count occurrences of Ch
// Close the file
// Return its frequency.
	int fd=0,iRet=0,iCnt=0,i=0;
	char Buffer[10];
	
	fd = open(FName,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open the file.");
	}
	
	while((iRet = read(fd ,Buffer,10))!= 0)
	{
		for(i=0;i < iRet;i++)
		{
			if(Buffer[i] == ch)
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
	char cValue;
	int iRet = 0;
	
	printf("Enter file name:");
	scanf("%s",FileName);
	
	printf("Enter a character : ");
	scanf(" %c",&cValue);
	
	iRet = CountChar(FileName,cValue);
	
	printf("Frequency is %d",iRet);
	
	return 0;
	
	
}
