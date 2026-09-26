/*
 Q - Write a program which reverse each elements of sll
  
 Input  :   |11|->|28|->|17|->|41|->|6|->|89|
 output :   |11|->|82|->|71|->|14|->|6|->|98|

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
 
void Reverse(PNODE Head) 
{
   int iRev = 0;
   int iNo = 0;
   int iDigit = 0;

   while(Head != NULL)
   {  
      iRev = 0;
      iNo = Head->Data;
   
      while(iNo != 0) 
      {
         iDigit = iNo % 10;
         iRev = (iRev * 10) + iDigit;
         iNo = iNo / 10;
      }           
      printf(" %d ",iRev);
       Head = Head ->Next;
   }
}


int main()
{
   PNODE First = NULL;


    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);     
    
    Reverse(First);

    return 0;
}