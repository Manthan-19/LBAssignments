/*
3. Write a program which returns addition of all element from singly linear 
linked list. 
Function Prototype :
int Addition( PNODE Head); 
Input linked list : |10|->|20|->|30|->|40| 
Output : 100
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

int Addition( PNODE Head)
{
	int iSum=0;
	iSum = Head -> data;
	while(Head -> next != NULL)
	{
		//iSum += Head -> data;
		Head = Head -> next;
		iSum +=Head -> data;
	}
	return iSum;
}

int main()
{
	PNODE first = NULL;
	int iRet =0;
	
	InsertFirst(&first,50);
	InsertFirst(&first,40);
	InsertFirst(&first,30);
	InsertFirst(&first,20);
	InsertFirst(&first,10);
	
	iRet = Addition(first);
	
	printf("%d",iRet);
	
	return 0;
}