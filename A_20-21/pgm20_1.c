/*1. Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : TRUE
Input : &
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
	if((ch>='A') && (ch<='Z') || (ch>='a') && (ch<='z'))
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
	bRet=CheckAlpha(cValue);
	
	if(bRet==true)
	{
		printf("It is Character.");
	}
	else
	{
		printf("It is not a character.");
	}
	
	return 0;
}