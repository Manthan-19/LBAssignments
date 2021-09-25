#include<stdio.h>
void Pattern(int iRow, int iCol)
{
// Logic
	int i=0,j=0;
	for(i=i;i<=iRow+1;i++)
	{
		for(j=1;j<=iCol+1;j++)
		{
			if(i==1 || j==1)
			{
				printf("%d\t",j);
			}
			else if(i==iRow+1 || j==iCol+1)
			{
				printf("%d\t",j);
			}
			else if(i==j)
			{
				printf("%d\t",j);
			}
			else
			{
				printf("\t");
			}
		}
		printf("\n");
	}
}

int main()
{
int iValue1 = 0, iValue2 = 0;
printf("Enter number of rows:");
scanf("%d",&iValue1);

printf("ENter the number of columns:");
scanf("%d",&iValue2);
Pattern(iValue1, iValue2);
return 0;
}