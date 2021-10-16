/*
1.Write a program which accept one number from user and count number of
ON (1) bits in it without using % and / operator.
Input : 11
Output : 3
*/

#include<stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
// Logic
	UINT iResult = 0,iCnt=0;
	UINT iMask=0X00000001;
	int i=0;
	
	while(iNo!=0)
	{
		iResult = iNo & iMask;	
		if(iResult == iMask)
		{
			iCnt++;
		}
		iNo = iNo >> 1;
	}
	return iCnt;
}

int main()
{
	UINT iValue=0;
	UINT iRet=0;
	
	printf("Enter a number: ");
	scanf("%d",&iValue);
	
	iRet = CountOne(iValue);
	printf("Frequency of 1 is %d",iRet);
}