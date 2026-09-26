// Insert First
// Insert Last
// Display
// Count

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node 
{
  int data;
  struct node *next;
  struct node *prev;    // X
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");
     
    printf("NULL <=>");
    while(First != NULL)
    {
        printf("| %d |<=> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}


int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}


void InsertFirst(PPNODE First , int no)
{
    PNODE Newn = NULL;

    Newn = (PNODE)malloc(sizeof(NODE));

    if(Newn == NULL)
    {
        printf("Malloc Failed \n");
        return;
    }
 Newn ->data = no;
 Newn ->next = NULL;
 Newn->prev = NULL;
  
  if(*First == NULL)
  {
     *First = Newn;
  }
  else
  {
    Newn->next = *First;
    (*First)->prev = Newn;  // X
    *First=Newn;
  }
}


void InsertLast(PPNODE First , int no)
{
    PNODE Newn = NULL;
    PNODE temp = *First;

    Newn = (PNODE)malloc(sizeof(NODE));

    if(Newn == NULL)
    {
        printf("Malloc Failed \n");
        return;
    }
 Newn ->data = no;
 Newn ->next = NULL;
 Newn->prev = NULL;
  
  if(*First == NULL)
  {
     *First = Newn;
  }
  else
  {
    while(temp->next != NULL)
    {
        temp = temp->next;
    } 
    
    temp->next = Newn;
    Newn->prev = temp;   // X
  
  }
}
int main()
{
 PNODE Head = NULL;
 
 int iRet = 0;

 InsertFirst(&Head,51);
    Display(Head);

    InsertFirst(&Head,21);
    Display(Head);

    InsertFirst(&Head,11);
    Display(Head);

    InsertLast(&Head,101);
    Display(Head);

    InsertLast(&Head,111);
    Display(Head);

    InsertLast(&Head,121);
    Display(Head);

 return 0;
}

