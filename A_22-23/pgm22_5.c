/*
3. Write a program which accept string from user and display it inn
reverse order.

Input : “MarvellouS”

Output : “SuollevraM”
*/
#include<stdio.h>

void Reverse(char *str)
{
	int iSize = 0; 
	char *crr = NULL;
	crr = str;
	crr--;
	while(*str != '\0')
	{
		str++;
	}
	str--;
	
	while(*str != *crr)
	{
		printf("%c",*str);
		str--;
	}
}


int main()
{
char Arr[20];

printf("Enter string: ");
scanf("%[^’\n’]s",Arr);

Reverse(Arr);

return 0;
}