/*
3. Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “MarvellouS”

Output : 6 (8-2)
*/
#include<stdio.h>

int Difference(char *str)
{
int iCnt_Capital=0,iCnt_Small=0;

if(str == NULL)
	{
		return 0;
	}

while(*str != '\0')
{
// Logic
	if((*str>='a') && (*str<='z'))
	{
		iCnt_Small++;
	}
	else if ((*str>='A') && (*str<='Z'))
	{
		iCnt_Capital++;
	}
		str++;
}

return iCnt_Small - iCnt_Capital;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter a string: ");
	scanf("%[^'\n']s",&Arr);
	
	iRet = Difference(Arr);
	
	printf("%d",iRet);
	
	return 0;
	
}