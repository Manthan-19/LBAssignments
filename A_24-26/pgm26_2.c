/*
2. Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.

Input : “Marvel lous Pyth on”

Output : “MarvellousPython”

*/

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
// Logic
	while(*src != '\0')
	{
		if(*src == ' ')
		{
			src++;
		}
		*dest=*src;
		*dest++;
		*src++;
	}
	*dest='\0';
}

int main()
{
char Arr[30];
char Brr[30]; // Empty string

printf("Enter any string: ");
scanf("%[^'\n']s",Arr);

StrCpyX(Arr,Brr);

printf("String after removing white spaces: %s",Brr);//Output

return 0;
}