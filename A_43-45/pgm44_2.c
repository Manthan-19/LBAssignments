/*
2. Write a program which displays all elements which are prime from singly 
linear linked list. 
Function Prototype :
int DisplayPrime( PNODE Head); 
Input linked list : |11|->|20|->|17|->|41|->|22|->|89| 
Output : 11 17 41 89
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
	int data;
	struct node* next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn = NULL;
	
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn -> next = NULL;
	newn -> data = iNo;
	
	if(Head == NULL)
	{
		*Head = newn;
	}
	
	else
	{
		newn -> next = *Head;
		*Head = newn;
	}
	
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("| %d | -> ",Head -> data);
		Head = Head -> next;
	}
	printf("NULL\n");
}

bool isPrime(int num)
{
	int i = 0, iSum = 0;
	for(i=2;i<num;i++)
	{
		if((num % i)==0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
	
}
void DisplayPrime(PNODE Head)
{
	while(Head != NULL)
	{
		if(isPrime(Head -> data))
		{
			printf(" %d\t",Head -> data);
		}
		Head = Head -> next;
	}
}
int main()
{
	PNODE first = NULL;
	int iRet=0,iChoice=1,iValue=0;
	
	while(iChoice != 0)
	{
		printf("Enter the value: ");
		scanf("%d",&iValue);
		
		InsertFirst(&first,iValue);
		
		printf("Do you want to continue(1/0): ");
		scanf("%d",&iChoice);
	}
	
	Display(first);
		
	printf("Prime elements are : ");
		
	DisplayPrime(first);
	
	return 0;
}