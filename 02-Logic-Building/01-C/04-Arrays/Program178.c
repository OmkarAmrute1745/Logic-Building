// Insert First

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
    (*First)->prev = Newn;    // x
    *First=Newn;
  }
}


void InsertLast(PPNODE First , int no)
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
   
  }
}
int main()
{

 return 0;
}

