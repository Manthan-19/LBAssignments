/*
5. Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).

Input : “Marvellous Infosystems”

“Logic Building”

Output : “Marvellous Infosystems Logic Building”
*/

#include<stdio.h>

void StrCatX(char *src, char * dest)
{
// Filter
while(*src != '\0') // Traverse first string till end
{
// Logic
	src++;
}
	*src=' ';
	*src++;
	
while(* dest != '\0') // Copy contents of destination in source
{
// Logic
	*src = *dest;
	*src++;
	*dest++;
}
*dest = '\0';
}
int main()
{
char Arr[50] = "Marvellous Infosystems";
char Brr[50] = "Logic Building";

StrCatX(Arr,Brr);

printf("%s",Arr); // Output
return 0;
}