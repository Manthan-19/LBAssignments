/*2. Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL CheckCapital(char ch)
{
	if((ch>='A') && (ch<='Z'))
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
	bRet=CheckCapital(cValue);
	
	if(bRet==true)
	{
		printf("It is Capital.");
	}
	else
	{
		printf("It is not a Capital.");
	}
	
	return 0;
}