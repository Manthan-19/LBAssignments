/*
3. Accept Character from user and check whether it is digit or not
(0-9).
Input : 7
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL CheckDigit(char ch)
{
	if((ch>='0') && (ch<='9'))
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
	bRet=CheckDigit(cValue);
	
	if(bRet==true)
	{
		printf("It is a digit.");
	}
	else
	{
		printf("It is not a digit.");
	}
	
	return 0;
}