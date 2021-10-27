/*
2. Write a program which accepts file name from user and count number of 
small characters from that file.
Input : Demo.txt
Output : Number of small characters are 21
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int CountSmall(char FName[])
{
// Open file in read mode
// Read the data into local array
// Count capital characters
// Close the file
// Return its frequency.
	int fd=0,iRet=0,iCnt=0,i=0;
	char Buffer[10];
	
	fd = open(FName,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open the file.");
	}
	
	
	
	iRet = read(fd,Buffer,iRet);
	//for(int i=0;i<=Buffer[1024];i++)
	while((iRet = read(fd ,Buffer,10))!= 0)
	{
		for(int i=0;i<=iRet;i++)
		{
			if(Buffer[i]>='a' && Buffer[i]<='z')
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
	
	iRet = CountSmall(FileName);
	
	printf("Number of Small characters are %d",iRet);
	
	return 0;
	
	
}