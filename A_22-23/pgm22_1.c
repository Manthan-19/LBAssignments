/*
1.Write a program which accept string from user and count number of
capital characters.

Input : “Marvellous Multi OS”

Output : 4
*/

#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt = 0;

	if(str == NULL)
	{
		return 0;
	}

	while(*str != '\0')
	{
		// Logic
		if((*str>='A') && (*str<='Z'))
		{
			iCnt++;
		}
		str++;
	}

return iCnt;
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter a string: ");
	scanf("%[^'\n']s",&Arr);
	
	iRet = CountCapital(Arr);
	
	printf("%d",iRet);
	
	return 0;
	
}
	
	
