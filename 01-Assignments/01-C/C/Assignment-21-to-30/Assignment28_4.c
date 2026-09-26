/*
  Q - write a program which returns Largest  elements from singly Linear Linkedlist
                        
   Input Linked List : |110|->|230|->|320|->|240|
   Output : 320
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
   int Data;
   struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));
    if(newn == NULL)
    {
        printf(" Failed to Allocate memory ");
        return;
    }    

    newn->Next = NULL;
    newn -> Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
   if(Head == NULL)
   {
     printf("List is Empty");
   }
   else
   {
    while(Head != NULL)
    {
        printf("| %d |-> ",Head -> Data);
        Head = Head->Next;
    }
     printf(" NULL \n");
   }
}
 
int Maximum(PNODE Head) 
{
   int iMax =  0;

  
   while(Head != NULL)
   {
     if(Head->Data > iMax)
     {
        iMax = Head->Data;
     }   
     Head = Head->Next;
   }
   return iMax;
}


int main()
{
   PNODE First = NULL;
   int iRet = 0;

    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);     

     iRet = Maximum(First);
     printf("Maximum is : %d",iRet); 

    return 0;
}