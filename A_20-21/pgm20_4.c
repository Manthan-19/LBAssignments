/*
4. Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL CheckSmall(char ch)
{
	if((ch>='a') && (ch<='z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char cValue = '\0';
	BOOL bRet=false;
	
	printf("Enter a character:");
	scanf("%c",&cValue);
	bRet=CheckSmall(cValue);
	
	if(bRet==true)
	{
		printf("It is small.");
	}
	else
	{
		printf("It is not small.");
	}
	
	return 0;
}