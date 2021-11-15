/*
2. Write a program which display all palindrome elements of singly linked 
list. 
Function Prototype :
void DisplayPallindrome( PNODE Head); 

Input linked list : |11|->|28|->|17|->|414|->|6|->|89| 

Output : 11 6 414
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

void DisplayPallindrome(PNODE Head)
{
	int iAns = 0,iNo = 0, iDigit =0,iTemp=0;
	while(Head != NULL)
	{
		iAns =0;
		iNo = Head->data;
		iTemp = Head -> data;
		while(iNo != 0)
		{
		
			iDigit = iNo % 10;
			iAns = (iAns*10) + iDigit;
			iNo = iNo/10;
			
			if(iAns == iTemp)
			{	
				//Head->data = iAns;
				printf("%d\t",iAns);
			}
		}
		Head = Head -> next;
		
}

}


int main()
{
	PNODE first = NULL;
	int  iChoice = 1,iValue = 0;
	PNODE PerfectNo = NULL;
	
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
	
	DisplayPallindrome(first);
	
	
	return 0;
}
