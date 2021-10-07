/*
5. Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.

Input : “Marvellous Python 2”

Output : “mARVELLOUS pYTHON 2”
*/

#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
// Logic
	while(*src != '\0')
	{
		if((*src>='A') && (*src<='Z'))
		{
			*src = *src + 32;
		}
		else if ((*src>='a') && (*src<='z'))
		{
			*src = *src - 32;
		}
		*dest=*src;
		*dest++;
		*src++;
	}
	*dest='\0';
}

int main()
{
char Arr[50];
char Brr[50]; // Empty string

printf("Enter any string: ");
scanf("%[^'\n']s",Arr);

StrCpyToggle(Arr,Brr);

printf("After toggling string is : %s",Brr); // Output

return 0;
}