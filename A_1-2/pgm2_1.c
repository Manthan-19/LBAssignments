//Accept one number from user and print that no of * on screen
// Using "for" loop

#include <stdio.h>

void Display (int iNo)
{
	int iCnt = 0;
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("* \t");
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	
	Display(iValue);
	return 0;
}