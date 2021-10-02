/*
4. Write a program which accept string from user and check whether
it contains vowels in it or not.

Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

typedef bool BOOL;

BOOL CheckVowel(char *str)
{
	while(*str != '\0')
	{
		if(*str == 'a' || *str == 'A' || *str == 'e' || *str == 'E'|| *str == 'i' || *str == 'I' || *str == 'o' || *str == 'O' || *str== 'u' || *str == 'U' )
		{
			return true;
		}
		str++;
	}
	
	return false;
	
}

int main()
{
	char Arr[20];
	BOOL bRet = false;

	printf("Enter string: ");
	scanf("%[^'\n']s",Arr);

	bRet = CheckVowel(Arr);
	if(bRet == true)
	{
		printf("Contains Vowel");
	}
	
	else
	{
		printf("There is no Vowel");
	}
	
	return 0;
}

