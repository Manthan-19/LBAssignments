//check even or odd

#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL isEven(int iNo)
{
	if(iNo % 2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue = 0;
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	
	BOOL bRet = FALSE;
	
	bRet = isEven(iValue);
	
	if(bRet == 1)
	{
		printf("Even Number");
	}
	else
	{
		printf("Odd Number");
	}
	return 0;
}