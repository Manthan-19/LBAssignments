//	Accept one character from user and convert case of that character. 
//	Input : a Output : A 
//	Input : D Output : d

#include <stdio.h>

void DisplayConvert(char );

int main()
{
	char cValue = '\0';
	
	printf("Enter Character : \n");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	return 0;
}

void DisplayConvert(char CValue)
{
	if(CValue >= 'a' && CValue <= 'z')
	{				
		printf("%c\n",CValue - 32);			// Capital Character
	}
	else
	{
		printf("%c\n",CValue + 32);			// Lower Character
	}
}