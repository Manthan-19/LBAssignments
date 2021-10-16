/*
5. Write a program which accept one number from user and toggle contents
of first and last nibble of the number. Return modified number. (Nibble is a
group of four bits)
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
// Logic
	UINT iResult=0;
	UINT iMask=0XF000000F;
	
	iResult = iNo ^ iMask;
	
	return iResult;
}

int main()
{
	UINT iValue=0;
	UINT iRet=0;
	
	printf("Enter a number: ");
	scanf("%d",&iValue);
	
	iRet = OffBit(iValue);
	printf("%d",iRet);
	
	return 0; 
}