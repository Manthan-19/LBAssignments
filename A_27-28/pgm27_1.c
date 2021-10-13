//1.Write a program which checks whether 15th bit is On or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	//0000 	0000 	0000 	0000 	0100 	0000 	0000 	0000 
	//0		0		0		0		4		0		0		0	
	UINT iMask =0X00004000;
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
		printf("15th Bit is ON");
	}
	else
	{
		printf("15th Bit is OFF");
	}
	return 0;
}
