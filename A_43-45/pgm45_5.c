/*
5. Write a program which display largest digits of all element from singly 
linear linked list.
Function Prototype :
void DisplayLarge( PNODE Head); 

Input linked list : |11|->|250|->|532|->|419| 

Output : 1 5 5 9
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

void DisplayLarge(PNODE Head)
{
	int iNo=0,iDigit=1,iAns=0,iLDigit=0;
	
	while(Head != NULL)
	{
		iLDigit =0;
		iNo = Head -> data;
		
			while(iNo>0)
			{
				iDigit = iNo % 10;
				
				if(iLDigit<iDigit)
				{
					iLDigit = iDigit;
				}
			
				iNo = iNo/10; 
			}
			printf("%d\t",iLDigit);
		
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
	
	DisplayLarge(first);
	
	
	return 0;
}