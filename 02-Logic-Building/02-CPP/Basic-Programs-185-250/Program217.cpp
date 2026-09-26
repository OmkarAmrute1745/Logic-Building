// InsertFirst
// Display  
// 2 object 2 LinkedList


#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class SinglyLL
{
   public:
        PNODE First;
        int iCount;
        
        SinglyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPosition(int no,int ipos);

        void DeleteFirst();
        void DeletetLast();
        void DeleteAtPosition(int ipos);
        
        void Display();

};

/*
Return_Value class_Name :: Function_Name(Parameters)
{

}
*/

SinglyLL :: SinglyLL()
{
   First = NULL;
   iCount = 0;
}

void SinglyLL::InsertFirst(int no)
{
  // Step 1 : Allocate memory for node
   PNODE newn = new NODE;

  // Step 2 : Initialise node
  newn->data = no;
  newn->next = NULL;

 // Step 3 : Check if LL is Empty or not
  if(First == NULL) // if(iCount == 0)
  {
     First = newn;
     iCount++;
  }
  else  // if LL contains at least one node
  {
     newn->next = First;
     First = newn;
     iCount++;
  }
}
  
void SinglyLL:: InsertLast(int no)
{
   
    // Step 1 : Allocate memory for node
   PNODE newn = new NODE;

  // Step 2 : Initialise node
  newn->data = no;
  newn->next = NULL;

 // Step 3 : Check if LL is Empty or not
  if(First == NULL) // if(iCount == 0)
  {
     First = newn;
     iCount++;
  }
  else  // if LL contains at least one node
  {
     
  }

}

void SinglyLL:: InsertAtPosition(int no,int ipos)
{

}
void SinglyLL:: DeleteFirst()
{

} 

void SinglyLL:: DeletetLast()
{

}
  
void SinglyLL:: DeleteAtPosition(int ipos)
{

}
        
void SinglyLL:: Display()
{
    cout<<"Elements of Linked List are : "<<"\n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}


int main()
{
  SinglyLL obj1;
  SinglyLL obj2;

  cout<<sizeof(obj1)<<"\n";
  cout<<"First pointer contains : "<<obj1.First<<"\n";
  cout<<"Number of nodes are : "<<obj1.iCount<<"\n";
   

   obj1.InsertFirst(51);
   obj1.InsertFirst(21);
   obj1.InsertFirst(11);
   cout<<"Linked List of First object is : "<<"\n";
   obj1.Display();
   cout<<"Number of nodes are : "<<obj1.iCount<<"\n";
   
   ///////////////////////////////////////////////

   obj2.InsertFirst(1001);
   obj2.InsertFirst(510);
   obj2.InsertFirst(210);
   obj2.InsertFirst(110);
   cout<<"Linked List of Second object is : "<<"\n";
   obj2.Display();
   cout<<"Number of nodes are : "<<obj2.iCount<<"\n";
   
  


    return 0;
}
