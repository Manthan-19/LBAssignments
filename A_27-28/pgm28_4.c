/*
4. Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.
Input : 137
Output : 713
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
// Logic
	UINT iResult=0;
	//	0000	0000	0000	0000	0000	0010	0100	0000
	//	0		0		0		0		0		2		4		0
	
	UINT iMask=0x00000240;
	
	iResult = iNo & iMask;		//Checks whether 7th bit is on or off
	
	if(iResult == iMask)		//If it is on will enter the loop and will change accordingly
	{
		iResult = iNo ^ iMask;
		//return iResult;
	}
	else if(iResult != iMask)					//Else it will enter here and return no as it is.
	{
		iResult = iNo ^ iMask;
		//return iResult;
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