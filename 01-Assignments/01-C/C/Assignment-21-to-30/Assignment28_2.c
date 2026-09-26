/*
  Q - Write a program which search Last occurrence of particlular elements from
       singly linear linked list
      Function should return position at which element is found
                        1     2     3     4     5     6     7
   Input Linked List : |10|->|20|->|30|->|40|->|50|->|30|->|70|
   Input Element  : 30
   Output : 6
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
 
int SearchLastOcc (PNODE Head ,int no) 
{
   int iCnt = 0;
   int ic = 0;
   while(Head != NULL)
   {
     iCnt++;
     if(Head->Data == no)
     {
         ic = iCnt;
     }
     Head = Head->Next;
   }
   return ic;
}


int main()
{
   PNODE First = NULL;
   int iValue = 0;
   int iRet = 0;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);     

    printf("Enter Element To Search : ");
    scanf("%d",&iValue);
    
     iRet = SearchLastOcc(First,iValue);
     printf("%d : is at : %d position ",iValue,iRet); 

    return 0;
}