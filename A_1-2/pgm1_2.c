// Print 5 times "Marvellous" on Screen

#include <stdio.h>

void Display (int iNo)
{
	int i = 0;
	for(i = iNo; i>0; i--)
	{
		printf("Marvellous\n");
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number : \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}