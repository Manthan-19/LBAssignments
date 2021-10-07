/*
3. Write a program which accept string from user and copy that
characters of that string into another string by converting all small
characters into capital case.

Input : “Marvellous Python 2”

Output : “MARVELLOUS PYTHON 2”
*/

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
// Logic
	while(*src != '\0')
	{
		if((*src>='a') && (*src<='z'))
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
char Arr[30];
char Brr[30]; 

printf("Enter any string: ");
scanf("%[^'\n']s",Arr);


StrCpyCap(Arr,Brr);

printf("After conversion : %s",Brr); 

return 0;
}