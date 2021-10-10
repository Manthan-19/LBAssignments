//	Write a program which accept number from user and return difference between summation of all its factors and non factors.

//	INPUT : 12
//	OUTPUT : -34 (16 - 50)

//	INPUT : 10
//	OUTPUT : -29 (8 - 37)

#include<stdio.h>

int FactDiff(int );

int main()
{
	int iValue = 0, iRet = 0;
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	iRet = FactDiff(iValue);
	
	printf("%d",iRet);
	
	return 0;
}

int FactDiff(int iNo)
{
	int iCnt = 0, iFactSum = 0, iNonFactSum = 0;

	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iFactSum = iFactSum + iCnt;
		}
		else
		{
			iNonFactSum = iNonFactSum + iCnt; 
		}
	}
	
	return (iFactSum - iNonFactSum);
}