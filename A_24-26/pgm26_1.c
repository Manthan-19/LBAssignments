/*
1. Write a program which accept string from user and copy that
characters of that string into another string in reverse order.

Input : “Marvellous Python”

Output : “nohtyP suollevraM”
*/

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
// Logic
	char *ptr = NULL;
	ptr = src;
	ptr--;
	
	while(*src != '\0')
	{
		src++;
	}
	src--;
	while(*src != *ptr)
	{	
		*dest=*src;
		*src--;
		*dest++;
	}
	
	*dest='\0';
}

int main()
{
char Arr[50];
char Brr[50]; // Empty string

printf("Enter any string: ");
scanf("%[^'\n']s",Arr);

StrCpyRev(Arr,Brr);


printf("Reversed string is :%s",Brr); //Output
return 0;
}