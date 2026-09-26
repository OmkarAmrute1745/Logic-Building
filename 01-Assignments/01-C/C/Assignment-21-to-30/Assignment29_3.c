/*
 Q - Write a Program which return addition of all even elements from singly linear linked list 
 Input Linked List : |11| -> |20| -> |32| -> |41|
 Output :  52
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
 
int AdditionEven(PNODE Head) 
{
  int iSum = 0;

   while(Head != NULL)
   {  
      if((Head->Data) % 2 == 0 ) 
      {
        iSum = iSum + Head -> Data;
      }           

       Head = Head ->Next;
   }
   return iSum;
}

int main()
{
   PNODE First = NULL;
   int iRet = 0;

    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
 
    Display(First);     

   iRet = AdditionEven(First);
   
   printf("Addition of Even Numbers : %d ",iRet);

    return 0;
}