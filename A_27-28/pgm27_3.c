//3. Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF.

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	//0000 	1000 	0001 	0000 	0100 	0000 	0100 	0000 
	//0		8		0		0		4		0		4		0	
	UINT iMask =0X08004040;
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
		printf("7th,15th,21st & 28th Bit is ON");
	}
	else
	{
		printf("Bits are OFF");
	}
	return 0;
}
