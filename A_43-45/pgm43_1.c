/*
1. Write a program which search first occurrence of particular element from 
singly linear linked list. 
Function should return position at which element is found. 
 
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70| 

Input element : 30 

Output : 3 
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



int SearchFirstOcc(PNODE Head , int no )
{
	int iPos=Count(Head),i=0,iIndex=0;
	/*Logic 1
	while((Head -> data) != no)
	{
		Head = Head -> next;
		iPos++;
	}*/
	//Logic 2
	for(i=1;i<iPos;i++)
	{
		if((Head -> data) == no)
		{
			i;
			break;
		}
		else
		{
			return 0;
		}
		Head = Head -> next;
		
	}
	return i; 
}
int main()
{
	PNODE first = NULL;
	int iRet =0,iValue=0;
	
	InsertFirst(&first,30);
	InsertFirst(&first,50);
	InsertFirst(&first,40);
	InsertFirst(&first,30);
	InsertFirst(&first,20);
	InsertFirst(&first,10);
	
	
	printf("Enter the number to search:");
	scanf("%d",&iValue);
	iRet = SearchFirstOcc(first,iValue);
	if(iRet == 0)
	{
		printf("Number is not present");
	}
	else
	{
		printf("%d",iRet);
	}
	
	
	return 0;
}