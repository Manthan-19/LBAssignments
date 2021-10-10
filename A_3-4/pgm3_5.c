//	Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not. 
//	INPUT : E OUTPUT : TRUE 
//	INPUT : d OUTPUT : FALSE 

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char );

int main()
{
	char cValue = '\0';
	BOOL bRet = FALSE;
	
	printf("Enter Character : \n");
	scanf("%c",&cValue);
	
	bRet = ChkVowel(cValue);
	
	if(bRet == TRUE)
	{
		printf("It is Vowel");
	}
	else
	{
		printf("It is Not Vowel");
	}
	
	return 0;
}

BOOL ChkVowel(char CValue)
{
	if(CValue == 'a' || CValue == 'A' || CValue == 'e' || CValue == 'E' || CValue == 'i' || CValue == 'I' || CValue == 'o' || CValue == 'O' || CValue == 'u' || CValue == 'U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}



