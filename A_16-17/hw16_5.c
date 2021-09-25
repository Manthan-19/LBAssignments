#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[], int iLength)
{
// Logic
	int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%11==0)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
	//return iCnt;
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

	Display(p, iSize);
	free(p);
	return 0;
}
