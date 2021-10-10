//Accept two number from user display first no in second number of times

//	Input : 12 5
//	Output : 12 12 12 12 12

#include <stdio.h>

void Display(int iNo1, int iNo2)
{
	int iCnt = 0;
	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		printf("%d ", iNo1);
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter First Number : \n");
	scanf("%d", &iValue1);
	
	printf("Enter Second Number : \n");
	scanf("%d", &iValue2);
	
	Display(iValue1, iValue2);
	return 0;
}