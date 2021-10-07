/*
1.Write a program which accept string from user and accept one
character. Check whether that character is present in string or not.

Input : “Marvellous Multi OS”

e

Output : TRUE

Input : “Marvellous Multi OS”

W

Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;

BOOL ChkChar(char *str)
{
	/*while(*str!='\0')
	{
		if(*str == ch)
		{
			return true;
		}
		str++;	
	}
		return false;
*/
	char ch = '\0';
	
	printf("ENter the character:");
	scanf("%c",ch);
	int i=0;
	
	for(i=0;str[i]!='\0';str++)
	{
		if(str[i]==ch)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

int main()
{
char Arr[20];
//char cValue='\0';
BOOL bRet = false;

/*printf("Enter the character: ");
scanf("%c",cValue);*/

printf("Enter string:");
scanf("%[^'\n']s",Arr);

bRet = ChkChar(Arr);

if(bRet == true)
{
printf("Character found");
}
else
{
printf("Character not found");
}

return 0;
}