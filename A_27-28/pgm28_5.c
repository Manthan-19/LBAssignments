/*
5. Write a program which accept one number from user and on its first 4
bits. Return modified number.
Input : 73
Output : 79
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
// Logic
	UINT iResult=0;
	//0000	0000	0000	0000	0000	0000	0000	1111
	//0		0		0		0		0		0		0		F(15)
	UINT iMask=0X0000000F;
	
	iResult = iNo | iMask;
	
	if(iResult == iMask)
	{
		iResult;
	}
	return iResult;
}

int main()
{
	UINT iValue = 0;
	UINT iRet = 0;
	
	printf("Enter a number: ");
	scanf("%d",&iValue);
	
	iRet = OnBit(iValue);
	
	printf("%d",iRet);
}