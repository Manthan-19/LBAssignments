/*
4. Write a program which accept one number , two positions from user and
check whether bit at first or bit at second position is ON or OFF.
Input : 10 3 7
Output : TRUE
*/
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, int iPos1, int iPos2)
{
// Logic
	UINT iResult1=0,iResult2=0;
	UINT iMask1=0x00000001;
	UINT iMask2=0x00000001;
	
	iMask1 = ((iMask1) << (iPos1-1));
	iMask2 = ((iMask2) << (iPos2-1));
	
	iResult1 = iNo & iMask1;
	iResult2 = iNo & iMask2;
	
	if((iResult1 == iMask1) || (iResult2 == iMask2))
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
	UINT iValue=0,iBit1=0,iBit2=0;
	bool bRet=false;
	
	printf("Enter a number: ");
	scanf("%d",&iValue);
	
	printf("Enter 1st position:");
	scanf("%d",&iBit1);
	
	printf("Enter 2nd position:");
	scanf("%d",&iBit2);
	
	bRet = ChkBit(iValue,iBit1,iBit2);
	
	if(bRet == true)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}