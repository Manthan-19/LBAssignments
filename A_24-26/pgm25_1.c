/*
1.Write a program which accept string from user and copy the
contents of that string into another string. (Implement strcpy()
function)

Input : “Marvellous Multi OS”

Output : “Marvellous Multi OS”
*/
#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
// Fileter
while(*src != '\0' || *dest != '\0')
{
*dest = *src;
src++;
dest++;
}
dest;
}

int main()
{
char arr[30];
char brr[30]; // Empty string

printf("Enter any string:");
scanf("%[^'\n']s",arr);

StrCpyX(arr,brr);

printf("%s",brr); // Output

return 0;

}