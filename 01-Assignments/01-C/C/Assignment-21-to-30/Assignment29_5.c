/*
 Q - write a program which display addition of digits of elements from sll list

 Input Linked List : |110|->|230|->|20|->|240|->|640|
            Output :  2      5       2     6     10    
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
 
 void SumDigit(PNODE Head) 
{
  int iSum = 0;
  int iNo = 0;
  int iDigit = 0;

   while(Head != NULL)
   {  
      iSum = 0;
      iNo = Head->Data;
   
      while(iNo != 0) 
      {
         iDigit = iNo % 10;
         iSum = iSum + iDigit;
         iNo = iNo / 10;
      }           
      printf(" %d ",iSum);
       Head = Head ->Next;
   }
}


int main()
{
   PNODE First = NULL;
   int iRet = 0;

    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
 
    Display(First);     

    SumDigit(First);
   
    return 0;
}