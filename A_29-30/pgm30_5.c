/*
5. Write a program which accept one number from user and range of
positions from user. Toggle all bits from that range.
Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.

*/
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
// Logic
	UINT  iResult=0,iTemp=0;
	int i=0;
	UINT iMask=0X00000000;
	
	for(i=iStart;i<=iEnd;i++)
	{
		iTemp=0X00000001;
		iMask=iMask | iTemp << (i-1);
	}
	
	iResult = iNo ^ iMask;
	return iResult;
	
}

int main()
{
	UINT iValue=0,iBit1=0,iBit2=0;
	UINT iRet=0;
	
	printf("Enter a number: ");
	scanf("%d",&iValue);
	
	printf("Enter first bit of the range : ");
	scanf("%d",&iBit1);
	printf("Enter last bit of the range : ");
	scanf("%d",&iBit2);
	
	iRet = ToggleBitRange(iValue,iBit1,iBit2);
	
	printf("%d",iRet);
	
	
}