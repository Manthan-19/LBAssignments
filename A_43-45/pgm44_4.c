/*
4. Write a program which return second maximum element from singly linear 
linked list. 
Function Prototype :
int SecMaximum( PNODE Head); 

Input linked list : |110|->|230|->|320|->|240| 

Output : 240

*/

#include<stdio.h>
#include<stdlib.h>

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

int SecMaximum(PNODE Head)
{
	int Max = Head->data;
	int sMax = Head->data;

	Head = Head->next;
	
	while(Head != NULL)
	{
		if(Head->data > Max)
		{
			sMax = Max;
			Max = Head->data;
		}
		else if((Head->data < Max) && (Head->data > sMax))
		{
			sMax = Head->data;
		}
		Head = Head->next;
	}
	return sMax;
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
		
	iRet = SecMaximum(first);
	
	printf("Second maximum element in the linked list is: %d",iRet);
	
	return 0;
}