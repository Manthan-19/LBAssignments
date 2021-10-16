/*
2. Write a program which accept one number and position from user and off
that bit. Return modified number.
Input : 10 2
Output : 8
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
// Logic
	UINT iMask=0X00000001;
	UINT iResult=0;
	
	iMask = iMask << (iPos-1);
	
	iResult = iNo & iMask;
	
	if(iResult == iMask)
	{
		iResult = iNo ^ iMask;
	}
	else
	{
		return iNo;
	}
	return iResult;
}

int main()
{
	UINT iValue=0,iBit=0;
	UINT iRet=0;
	
	printf("Enter a number: ");
	scanf("%d",&iValue);
	
	printf("Enter a poistion: ");
	scanf("%d",&iBit);
	
	iRet = OffBit(iValue,iBit);
	printf("%d",iRet);
	
	return 0;
}