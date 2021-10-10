//	Write a program which accept number from user and return summation of all its non factors.
//	INPUT : 12
//	OUTPUT : 50

//	INPUT : 10
//	OUTPUT : 37

#include<stdio.h>

int SumNonFact(int );

int main()
{
	int iValue = 0,iRet = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	iRet = SumNonFact(iValue);
	
	printf("%d",iRet);
	
	return 0; 
}

int SumNonFact(int iNo)
{
	int iCnt = 0, iSum = 0;
	
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if(iNo % iCnt != 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}