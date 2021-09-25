#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
// Logic
	int iCnt=0,iEvenfreq=0,iOddfreq=0,iDifference=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iEvenfreq=iEvenfreq+1;
			
		}
		else
		{
			iOddfreq=iOddfreq+1;
		}
	
	}
	
	if(iEvenfreq>iOddfreq)
	{
		iDifference=iEvenfreq-iOddfreq;
	}
	else
	{
		iDifference=iOddfreq-iEvenfreq;
	}
	return iDifference;
}

int main()
{
	int iSize = 0,iRet = 0,iCnt = 0,iLength=0;
	int *p = NULL;
	printf("Enter number of elements");
	scanf("%d",&iSize);
	p = (int *)malloc(iSize * sizeof(int));
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter %d elements:\n",iSize);
	for(iCnt = 0;iCnt<iSize; iCnt++)
	{
		printf("Enter element %d :",iCnt+1);
		scanf("%d",&p[iCnt]);
	}

	iRet=Frequency(p, iSize);
	printf("Result is %d",iRet);
	free(p);
	return 0;
}
