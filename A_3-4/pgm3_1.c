// Accept one number and print that number of even numbers on screen
//	INPUT : 7
//	OUTPUT : 2	4	6	8	10	12	14

#include <stdio.h>

void PrintEven(int );

int main()
{
	int iNo = 0;
	printf("Enter Number:\n");
	scanf("%d",&iNo);
	
	PrintEven(iNo);
	return 0;
}

void PrintEven(int iValue)
{
	int iCnt = 0;
	int i = 0;
	
	if(iValue <= 0)
	{
		return;
	}
	
	for(i = 1; iCnt != iValue; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\n",i);
			iCnt++;
		}
	}
}