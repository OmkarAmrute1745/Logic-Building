/*****************************************
 Q - Write a Program which return Second maximum element from sll
 Input Linked List : |110| -> |230| -> |320| -> |240|
 Output :  240
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
 
int SecMaximum(PNODE Head) 
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
   return ;
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

   iRet = SecMaximum(First);
   
   printf("Second Maximum Numbers is : %d ",iRet);

    return 0;
}