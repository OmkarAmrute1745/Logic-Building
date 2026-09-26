/*
Q - Write a program which display Largest digit of all element from singly liear linked list
Input Linked List :  |11|->|250|->|532|->|419|
Output :               1     5      5      9
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
 
void  DisplayMaxDigit(PNODE Head) 
{
   int imax = 0;
   int iNo = 0;
   int iDigit = 0;
 
   while(Head != NULL)
   { 
      iNo = Head->Data;
      imax = 0;
      while(iNo != 0) 
      {  
         iDigit = iNo % 10;
         if(iDigit > imax)
         {
            imax = iDigit;
         }
         iNo = iNo / 10;
      }
       printf(" %d ",imax);
       Head = Head ->Next;
   }
}


int main()
{
   PNODE First = NULL;


    InsertFirst(&First,419);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);

    Display(First);     
    
    DisplayMaxDigit(First);

    return 0;
}