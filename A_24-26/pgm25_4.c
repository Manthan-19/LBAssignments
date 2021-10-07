/*
4. Write a program which accept string from user and copy small
characters of that string into another string.

Input : “Marvellous multi OS”

Output : “arvellous multi”
*/

#include<stdio.h>
void StrCpySmall(char *src, char *dest)
{
// Fileter
while(*src != '\0')
{
if((*src >= 'a') && (*src<='z'))
{
	*dest = *src;
	*dest ++;
}
	*src++;
}
	*dest='\0';
}

int main()
{
char Arr[50];
char Brr[50]; // Empty string

printf("Enter any string:");
scanf("%[^'\n']s",Arr);

StrCpySmall(Arr,Brr);

printf("%s",Brr); // Output
return 0;
}