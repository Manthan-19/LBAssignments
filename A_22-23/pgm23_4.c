/*
4. Write a program which accept string from user and display only
digits from that string.

Input : “marve89llous121”

Output : 89121

Input : “Demo”

Output :
*/

#include<stdio.h>

void DisplayDigit(char *str)
{

// Logic
	int i=0;
	while(*str!=0)
	{
		if(*str>='0' && *str<='9')
		{
			printf("%c",*str);
		}
		str++;
	}	
	
}

int main()
{
char Arr[50];

printf("Enter string: ");
scanf("%[^'\n']s",Arr);

DisplayDigit(Arr);
return 0;
}
