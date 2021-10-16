/*
3. Write a program which accept one number and position from user and on
that bit. Return modified number.
Input : 10 3
Output : 14
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
// Logic
	UINT iMask=0X00000001;
	UINT iResult=0;
	
	iMask = iMask << (iPos-1);
	
	iResult = iNo | iMask;
	
	if(iResult == iMask)
	{
		iResult = iNo ^ iMask;
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