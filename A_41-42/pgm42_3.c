/*
3. Write a program which accepts file name from user and count number of 
white spaces from that file.

Input : Demo.txt

Output : Number of white spaces are 13
*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int CountWhite(char FName[])
{
// Open file in read mode
// Read the data into local array
// Count white spaces 
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
		for(int i=0;i<iRet;i++)
		{
			if(Buffer[i]==' ')
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
	
	iRet = CountWhite(FileName);
	
	printf("Number of Small characters are %d",iRet);
	
	return 0;
	
	
}
