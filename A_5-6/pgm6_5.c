/*
Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
Input : 2395 
Output : -15 (2 - 17)
Input : 1018
Output : 6 (8 - 2)
Input : 8440
Output : 16 (16 - 0)
Input : 5733
Output : -18 (0 - 18)
*/
#include<stdio.h>

int CountDiff(int iNo)
{
	int iDigit = 0, iEvenSum = 0, iOddSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			iEvenSum = iEvenSum + iDigit;
		}
		else
		{
			iOddSum = iOddSum + iDigit;
		}
		iNo = iNo / 10;
	}
	return (iEvenSum - iOddSum);
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter Number: \n");
	scanf("%d",&iValue);
	
	iRet = CountDiff(iValue);
	
	printf("Difference Between Summation of Even Digits and Summation of Odd Digits: %d",iRet);
	return 0;
}