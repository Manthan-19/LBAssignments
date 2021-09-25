#include<stdio.h>
#include<stdlib.h>
int Difference(int Brr[], int iLength)
{
// Logic
	int iCnt=0,eSum=0,oSum=0,iDiff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Brr[iCnt]%2==0)
		{
			eSum=eSum + Brr[iCnt];
		}
		else if(Brr[iCnt]%2!=0)
		{
			oSum=oSum + Brr[iCnt];
		}
	}
	iDiff=eSum-oSum;
	return iDiff;
	//return printf("\t (%d-%d)",eSum-oSum);
	
}

int main()
{
	int iSize = 0,iRet = 0,iCnt = 0,iLength=0;
	int *p = NULL;

	printf("Enter number of elements:");
	scanf("%d",&iSize);
	p = (int *)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	printf("Enter %d elements\n",iSize);

	for(iCnt = 0;iCnt<iSize; iCnt++)
	{
		printf("Enter element %d :",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

iRet = Difference(p, iSize);

printf("Result is %d",iRet);
free(p);
return 0;
}