// Write a program which accept number from user and print even factors of that number. 
//	INPUT : 24
//	OUTPUT: 1 2 4 6 8 12 

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
	int i = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(i = 1; i <= iNo/2; i++)
	{
		if(iNo % i == 0)
		{
			if(i % 2 == 0)
			{
				printf("%d\n",i);
			}
		}
	}
}