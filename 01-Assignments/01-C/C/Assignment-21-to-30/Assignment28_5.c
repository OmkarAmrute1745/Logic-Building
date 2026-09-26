/*
  Q - write a program which returns Smallest elements from singly Linear Linkedlist
                        
   Input Linked List : |110|->|230|->|20|->|240|
   Output : 20
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
 
int Minimum(PNODE Head) 
{
   int iMin = 0;

   iMin =  Head -> Data;
   while(Head != NULL)
   {
     if( Head->Data < iMin)
     {
        iMin = Head->Data;
     }   
     Head = Head->Next;
   }
   return iMin;
}


int main()
{
   PNODE First = NULL;
   int iRet = 0;

    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);

    Display(First);     

     iRet = Minimum(First);
     printf("Minimum is : %d",iRet); 

    return 0;
}