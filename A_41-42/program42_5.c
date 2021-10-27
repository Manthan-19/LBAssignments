/*
5. Write a program which accepts file name and one count from user and read 
that number of characters from starting position.
Input : Demo.txt 12
Output : Display first 12 characters from Demo.txt
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<io.h>

void DisplayN(char FName[],int iNo)
{
	int fd=0,i=0,iCnt=0,iRet=0;
	char Buffer[1024];
	
	fd = open(FName,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to open the file");
	}
	
	
	while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
	{
		write(1,Buffer,iNo);		
	}
	
}

int main()
{
	char FileName[30];
	int iValue=0;
	
	printf("Enter the file name :");
	scanf("%s",FileName);
	
	printf("Enter the number of characters :");
	scanf("%d",&iValue);
	
	DisplayN(FileName,iValue);
	
	return 0;

}