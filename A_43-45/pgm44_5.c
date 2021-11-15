/*
5. Write a program which display addition of digits of element from singly 
linear linked list. 

Function Prototype :int SumDigit( PNODE Head);

Input linked list : |110|->|230|->|20|->|240|->|640| 

Output : 2 5 2 6 10
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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
void SumDigit(PNODE Head)
{
	int iNo=0,iDigit=0,iSum=0,iRet=0,iAns=0;
	
	while(Head != NULL)
	{
		iSum =0;
		iNo = Head -> data;
		Head = Head -> next;
		while(iNo>0)
		{		
			iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo/10;
		}
		printf("Sum is %d \n",iSum);
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
		
	SumDigit(first);
	
	return 0;
}