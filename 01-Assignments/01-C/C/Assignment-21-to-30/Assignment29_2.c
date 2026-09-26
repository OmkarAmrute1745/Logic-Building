/*****************************************************
 Q - Write a Program which display all elements which are prime for singly linear linked list
 Input Linked List : |11| -> |20| -> |17| -> |41| -> |22| -> |89|
 Output :  11  17  41  89 
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
 
void DisplayPrime(PNODE Head) 
{
  int iSum = 0;
  int i = 0;

   while(Head != NULL)
   {  
                  
       
   }
}

int main()
{
   PNODE First = NULL;
    
    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
 
    Display(First);     

    DisplayPrime(First);
   

    return 0;
}