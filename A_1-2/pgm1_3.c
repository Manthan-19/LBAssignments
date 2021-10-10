// Print 5 to 1 

#include<stdio.h>

void Display()
{
	int iCounter = 0;
	for(iCounter = 5; iCounter > 0; iCounter--)
	{
		printf("%d\n",iCounter);
	}
}

int main()
{	
	Display();
	
	return 0;
}