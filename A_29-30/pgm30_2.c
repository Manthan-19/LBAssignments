/*
2. Write a program which accept two numbers from user and display position
of common ON bits from that two numbers.
Input : 10 15 (1010 1111)
Output : 2 4
*/
#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
	// Logic
	UINT iResult=0;
	int iBit=1,iPos=1;
	iResult = iNo1 & iNo2;
	
	printf("Common Bits are at ");
	
	while(iResult !=0)
	{
		iBit = iResult & 1;
		if(iBit == 1)
		{
			printf("%d\t",iPos);
		}
		iResult = iResult >> 1;
		iPos++;
	}
	
}

int main()
{
	UINT iValue1=0,iValue2=0;
	
	printf("Enter two numbers: ");
	scanf("%d %d",&iValue1,&iValue2);

	CommonBits(iValue1,iValue2);
	return 0;
}