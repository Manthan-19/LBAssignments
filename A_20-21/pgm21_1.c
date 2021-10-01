/*
1. Write a program which displays ASCII table. Table contains symbol,
Decimal, Hexadecimal and Octal representation of every member from
0 to 255.
*/

#include<stdio.h>

void DisplayASCII()
{
	int i=0;
	printf("ASCII Table is displayed below:\n");
	printf("*****************************************************************\n");
	
	printf("Symbol\t	Decimal\t	Hexadecimal\t	Octal\t\n");
	
	printf("*****************************************************************\n");
	
	for(i=0;i<255;i++)
	{
		printf("%c\t	%d\t	%x\t	%o\t\n",i,i,i,i);
	}
}

int main()
{
	DisplayASCII();
	
	return 0;
}