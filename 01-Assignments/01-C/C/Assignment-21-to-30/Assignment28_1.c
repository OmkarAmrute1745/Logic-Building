/*
  Q - Write a program which search first occurrence of particlular elements from
       singly linear linked list
      Function should return position at which element is found
                        1     2     3     4     5     6     7
   Input Linked List : |10|->|20|->|30|->|40|->|50|->|60|->|70|
   Input Element  : 30
   Output : 3
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
 
int SearchFirstOcc (PNODE Head ,int no) 
{
   int iCnt = 0;
   while(Head != NULL)
   {
     iCnt++;
     if(Head->Data == no)
     {
        break;
     }
     Head = Head->Next;
   }
   return iCnt;
}


int main()
{
   PNODE First = NULL;
   int iValue = 0;
   int iRet = 0;

    InsertFirst(&First,70);
    InsertFirst(&First,60);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);     

    printf("Enter Element To Search : ");
    scanf("%d",&iValue);
    
     iRet = SearchFirstOcc(First,iValue);
     printf("%d : is at : %d position ",iValue,iRet); 

    return 0;
}