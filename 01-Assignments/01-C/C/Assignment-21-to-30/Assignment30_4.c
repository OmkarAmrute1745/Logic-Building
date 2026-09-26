/*
Q - Write a program which display smallest digit of all element from singly liear linked list
Input Linked List :  |11|->|250|->|532|->|415|
Output :               1     0      2      1
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
 
void  DisplaySmallDigit(PNODE Head) 
{
   int imin = 0;
   int iNo = 0;
   int iDigit = 0;
 
   while(Head != NULL)
   { 
      iNo = Head->Data;
      imin = 9;
      while(iNo != 0) 
      {  
         iDigit = iNo % 10;
         if(iDigit < imin)
         {
            imin = iDigit;
         }
         iNo = iNo / 10;
      }
       printf(" %d ",imin);
       Head = Head ->Next;
   }
}


int main()
{
   PNODE First = NULL;


    InsertFirst(&First,415);
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);

    Display(First);     
    
    DisplaySmallDigit(First);

    return 0;
}