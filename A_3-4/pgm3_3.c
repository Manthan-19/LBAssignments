//	Write a program which accept number from user and print even factors of that number. 
//	INPUT : 36
//	OUTPUT: 2 6 12 18 

#include <stdio.h>

void DisplayEvenFactors(int );

int main()
{
	int iValue = 0;
	
	printf("Enter Number:\n");
	scanf("%d",&iValue);
	
	DisplayEvenFactors(iValue);
	return 0;
}

void DisplayEvenFactors(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int i = 0;
	for(i = 1; i <= iNo/2; i++)
	{
		if(iNo % i == 0 && i % 2 == 0)
		{
			printf("%d\n",i);
		}
	}
}