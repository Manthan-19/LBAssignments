/*
2. Write a program which search last occurrence of particular element from 
singly linear linked list. 
Function should return position at which element is found. 
Function Prototype :
int SearchLastOcc( PNODE Head, int no ); 
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70| 
Input element : 30 
Output : 6 
*/


#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertLast(PPNODE Head , int ino)
{
	PNODE newn = NULL;
	PNODE temp = *Head;
	newn = (PNODE) malloc(sizeof(NODE));
	
	
	newn -> data = ino;
	newn -> next = NULL;
	
	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(temp -> next != NULL)
		{
			temp = temp -> next;
		}
		temp -> next = newn;
	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("| %d | ->",Head -> data);
		Head = Head -> next;
	}
		printf(" NULL\n");
}




int SearchLastOcc(PNODE Head , int no )
{
	int iPos=1,i=1;
	while(Head != NULL)
	{
		if((Head -> data) == no)
		{
			iPos = i;
		}
		i++;
		
		Head = Head -> next; 
	}
	return iPos;
}
int main()
{
	PNODE first = NULL;
	int iRet =0;
	
	InsertLast(&first,40);
	InsertLast(&first,30);
	InsertLast(&first,50);
	InsertLast(&first,40);
	InsertLast(&first,30);
	InsertLast(&first,20);
	InsertLast(&first,10);
	
	Display(first);
	
	iRet = SearchLastOcc(first,40);
	
	printf("%d",iRet);
	
	return 0;
}