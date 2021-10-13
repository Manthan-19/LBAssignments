/*
1.Write a program which accept one number from user and off 7th bit of that
number if it is on. Return modified number.
Input : 79
Output : 15
*/

#include<stdio.h>


typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
// Logic
	UINT iResult=0;
	//	0000	0000	0000	0000	0000	0000	0100	0000
	//	0		0		0		0		0		0		4		0
	
	UINT iMask=0x00000040;
	
	iResult = iNo & iMask;		//Checks whether 7th bit is on or off
	
	if(iResult == iMask)		//If it is on will enter the loop and will change accordingly
	{
		iResult = iNo ^ iMask;
		return iResult;
	}
	else					//Else it will enter here and return no as it is.
	{
		return iNo;
	}
	
}

int main()
{
	UINT iValue=0;
	UINT iRet=0;
	
	printf("Enter a number:");
	scanf("%d",&iValue);
	
	iRet = OffBit(iValue);
	
	printf("%d",iRet);
}