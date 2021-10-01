/*
4. Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>

typedef bool BOOL;


BOOL CheckSpecial(char ch)
{
// Apply condition to check whether it is special or not.
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z' || ch>='0' && ch<='9')
	{
		return false;
	}
	else 
	{
		return true;
	}
}

int main()
{
char cValue = '\0';
BOOL bRet = false;
printf("Enter the character: ");
scanf("%c",&cValue);
bRet = CheckSpecial(cValue);
if(bRet == true)
{
	printf("It is special Character");
}
else
{
	printf("It is not a special Character");
}
return 0;
}