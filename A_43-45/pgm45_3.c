/*
3. Write a program which display product of all digits of all element from 
singly linear linked list. (Don’t consider 0) 

Function Prototype :

void DisplayProduct( PNODE Head); 

Input linked list : |11|->|20|->|32|->|41| 

Output : 1 2 6 4

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

void DisplayProduct(PNODE Head)
{
	int iNo=0,iDigit=1,iAns=0;
	
	while(Head != NULL)
	{
		iAns =1;
		iNo = Head -> data;
		
		while(iNo>0)
		{
			iDigit = iNo % 10;
			if(iDigit!=0)
			{
				iAns = iAns * iDigit;
			}
			iNo = iNo/10; 
		}
		printf("%d\t",iAns);
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
	
	DisplayProduct(first);
	
	
	return 0;
}
