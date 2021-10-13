/*
3. Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.
Input : 137
Output : 201
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
// Logic
	UINT iResult=0;
	//	0000	0000	0000	0000	0000	0000	0100	0000
	//	0		0		0		0		0		0		4		0
	
	UINT iMask=0x00000040;
	
	iResult = iNo & iMask;		//Checks whether 7th bit is on or off
	
	if(iResult == iMask)		//If it is on will enter the loop and will modify number accordingly
	{
		iResult = iNo ^ iMask;
	}
	else if(iResult != iMask)					//Else if it will enter this loo[ and will modify number accordingly.
	{
		iResult = iNo ^ iMask;
	}
	
	return iResult;
}

int main()
{
	UINT iValue=0;
	UINT iRet=0;
	
	printf("Enter a number:");
	scanf("%d",&iValue);
	
	iRet = ToggleBit(iValue);
	
	printf("%d",iRet);
}