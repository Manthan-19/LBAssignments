//	Write a program which accept number from user and display its multiplication of factors.
//	INPUT : 12
//	OUTPUT : 144 (1 * 2 * 3 * 4 * 6)

//	INPUT : 13
//	OUTPUT : 1 (1)

//	INPUT : 10
//	OUTPUT : 10 (1 * 2 * 5)

#include<stdio.h>

int MultFact(int );

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	iRet = MultFact(iValue);
	
	printf("%d", iRet);
	
	return 0;
}

int MultFact(int iNo)
{
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	int iMul = 1;
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iMul = iMul * iCnt;
		}
	}
	return iMul;
}