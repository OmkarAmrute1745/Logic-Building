/*
 Q - Write a Program which display all elements which are perfectfrom Singly linked list
  
  Input Linked List  :  |11|->|28|->|17|->|41|-> |6|->|89|
  Output : 6  28  
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
 
void Perfect(PNODE Head) 
{
  int iSum = 0;
  int i = 0;

   while(Head != NULL)
   {  
      
      iSum = 0;
      for( i = 1 ; i <=(Head -> Data / 2) ; i++)
      {
         if((Head -> Data % i ) == 0)
         {
            iSum = iSum + i; 
         }
      }
     
      if(iSum == Head->Data)
      {
        printf(" %d ",iSum);
      }
      Head = Head-> Next;
   } 
}


int main()
{
   PNODE First = NULL;
    
    InsertFirst(&First,6);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,28);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
 
    Display(First);     

    Perfect(First);
   

    return 0;
}