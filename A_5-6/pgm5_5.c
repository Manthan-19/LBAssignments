/*
Write a program which accept number from user and count frequency of such a digits which are less than 6.

Input : 2395 
Output : 3

Input : 1018
Output : 3

Input : 9440
Output : 3

Input : 96672
Output : 1

*/

#include<stdio.h>

int count(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	int iDigit = 0, iCnt = 0;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit < 6)
		{
			iCnt++;
		}
		iNo = iNo / 10;
	}
	return iCnt;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter Number :\n");
	scanf("%d",&iValue);
	
	iRet = count(iValue);
	
	printf("The Frequency of Digits less than 6 are : %d",iRet);
	
	return 0;
}