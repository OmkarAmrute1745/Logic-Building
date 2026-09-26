// doubly Circular ll
// prototype
// Insert First 
// Insert Last

#include<stdio.h>

#pragma pack(1) // 
struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


void InsertFirst(PPNODE First , PPNODE Last , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*First == NULL) && (*Last == NULL)) //if LL is Empty
    {
        *First = newn;
        *Last = newn;
    }
    else  // if LL contains one or more node
    {
       newn -> next = *First;
       (*First) -> prev = newn;
       *First = newn;     
    }
    (*First) -> prev = *Last;
    (*Last) -> next = *First; 
}


// 
void InsertLast(PPNODE First , PPNODE Last , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;

    if((*First == NULL) && (*Last == NULL)) //if LL is Empty
    {
        *First = newn;
        *Last = newn;
    }
    else  // if LL contains one or more node
    {
       (*Last) -> next = newn
       newn -> prev = *Last;
       *Last = newn;  
    }
    (*First) -> prev = *Last;
    (*Last) -> next = *First; 
}


int main()
{
  PNODE Head = NULL;
  PNODE Tail = NULL;


    return 0;
}