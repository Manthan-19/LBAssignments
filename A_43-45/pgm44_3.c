/*
3. Write a program which returns addition of all even element from singly 
linear linked list. 
Function Prototype :
int AdditionEven( PNODE Head); 

Input linked list : |11|->|20|->|32|->|41| 

Output : 52
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

bool isEven(int num)
{
	if(num % 2==0)
	{ 
		return true;
	}
	else
	{
		return false;
	}
	
}

int AdditionEven(PNODE Head)
{
	int iSum = 0;
	while(Head != NULL)
	{
		if(isEven(Head -> data))
		{
			iSum = iSum + (Head -> data);
		}
		Head = Head -> next;
	}
	return iSum;
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
		
	iRet = AdditionEven(first);
	
	printf("Sum of even elements are: %d ",iRet);
		
	return 0;
}