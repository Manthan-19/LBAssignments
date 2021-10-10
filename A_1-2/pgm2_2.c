//Accept one number from user and print that no of * on screen
// Using "while" loop

#include <stdio.h>

void Display(int iNo)
{
	int i = 1;
	while(i <= iNo)
	{
		printf("* \t");
		i++;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter Number : \n");
	scanf("%d", &iValue);
	
	Display(iValue);
	return 0;
}