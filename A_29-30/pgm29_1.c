/*
1.Write a program which accept one number and position from user and
check whether bit at that position is on or off. If bit is one return TURE
otherwise return FALSE.
Input : 10 2
Output : TRUE
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos)
{
// Logic
	UINT iMask = 0X00000001;
	UINT iResult=0;
	if(iPos<1 || iPos>32)
	{
		return false;
	}
	
	iMask = iMask << (iPos-1);
	iResult = iNo & iMask;
	
	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}


}

int main()
{
	UINT iValue=0,iBit=0;
	bool bRet=false;
	
	printf("Enter a number: ");
	scanf("%d",&iValue);
	
	printf("Enter a position:");
	scanf("%d",&iBit);
	
	bRet = ChkBit(iValue,iBit);
	
	if(bRet == true)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}