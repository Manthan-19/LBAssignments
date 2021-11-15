/*
4. Write a program which return largest element from singly linear linked 
list. 
Function Prototype :
int Maximum( PNODE Head); 
Input linked list : |110|->|230|->|320|->|240|
Output : 320
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head , int ino)
{
	PNODE newn = NULL;
	newn = (PNODE) malloc(sizeof(NODE));
	
	
	newn -> data = ino;
	newn -> next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> next = *Head;
		*Head = newn;
	}
}

int Count(PNODE Head)
{
	int iCnt=0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head -> next;
	}
	return iCnt;
}

int Largest(PNODE Head)
{
	int iNumber=0;
	iNumber = Head -> data;
	
	while(Head -> next != NULL)
	{
		Head = Head -> next;
		
		if( (Head -> data) > iNumber )
		{
			iNumber = Head -> data;
		}
		else
		{
			iNumber;
		}
	}
	return iNumber;
}

int main()
{
	PNODE first = NULL;
	int iRet =0;
	
	InsertFirst(&first,500);
	InsertFirst(&first,440);
	InsertFirst(&first,330);
	InsertFirst(&first,220);
	InsertFirst(&first,110);
	
	iRet = Largest(first);
	
	printf("%d",iRet);
	
	return 0;
}