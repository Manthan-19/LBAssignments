//2. Write a program which checks whether 5th & 18th bit is On or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	//0000 	0000 	0000 	0010 	0000 	0000 	0001 	0000 
	//0		0		0		2		0		0		1		0	
	UINT iMask =0X00020010;
	UINT iResult =0;
	
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
	UINT iValue=0;
	bool bRet=false;
	
	printf("Enter a number:");
	scanf("%d",&iValue);
	
	bRet = CheckBit(iValue);
	
	if(bRet == true)
	{
		printf("7th & 18th Bit is ON");
	}
	else
	{
		printf("Bits are OFF");
	}
	return 0;
}
