/*
 Q - Write a program which Display Product of all digits in slll(Dont Consider 0)
  
 Input  :   |11|->|20|->|32|->|41|
 output :    1     2      6    4

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
 
void  DisplayProduct(PNODE Head) 
{
   int iRev = 0;
   int iNo = 0;
   int iDigit = 0;
 
   while(Head != NULL)
   {  
      iRev = 1;
      iNo = Head->Data;
   
      while(iNo != 0) 
      {
         iDigit = iNo % 10;
         if(iDigit == 0)
         {
            iDigit = 1;
         }
         iRev = (iRev) *  iDigit;
         iNo = iNo / 10;
      }
       printf(" %d ",iRev);
       Head = Head ->Next;
   }
}


int main()
{
   PNODE First = NULL;


    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);

    Display(First);     
    
    DisplayProduct(First);

    return 0;
}