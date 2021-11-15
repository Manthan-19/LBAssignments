/*
4. Write a program which display smallest digits of all element from singly 
linear linked list.
Function Prototype :
void DisplaySmall( PNODE Head); 

Input linked list : |11|->|250|->|532|->|415| 

Output : 1 0 2 1
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	 
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else 
	{
		newn->next = *Head;
		*Head = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("|%d|->",Head->data);
		Head = Head -> next;
	}
	printf("NULL\n");
}

void DisplaySmall(PNODE Head)
{
	int iNo=0,iDigit=1,iAns=0,iSDigit=10;
	
	while(Head != NULL)
	{
		iSDigit =10;
		iNo = Head -> data;
		if(iNo!=0)
		{
			while(iNo>0)
			{
				iDigit = iNo % 10;
				
				if(iSDigit>iDigit)
				{
					iSDigit = iDigit;
				}
			
				iNo = iNo/10; 
			}
			printf("%d\t",iSDigit);
		}
		
		else
		{
			printf("0\t");
			Head = Head -> next;
		}
		
		Head = Head -> next;
	}
	
}

int main()
{
	PNODE first = NULL;
	int  iChoice = 1,iValue = 0;
	
	while(iChoice != 0)
	{
		printf("Enter the element to insert \n");
		scanf("%d",&iValue);
		
		InsertFirst(&first,iValue);
		
		printf("Do you want to continue(1/0)\n");
		scanf(" %d",&iChoice);
	}
	printf("Element of Linked List are : \n");
	Display(first);
	
	DisplaySmall(first);
	
	
	return 0;
}