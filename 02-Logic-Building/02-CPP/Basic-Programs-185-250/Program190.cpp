// Template OOP prog

#include<iostream>
using namespace std;

class Numbers
{
    public:
         int iNo;

         Numbers(int i)
         {
            iNo = i;
         }
         
         void Function() // Here we Want to place the function with bussiness logic 
         {
            // Logic
         }
     
      

};

int main()
{
    int iValue;

    cout<<"Enter Number : \n";
    cin>>iValue;

    Numbers obj(iValue);
     
     obj.Function();

    return 0;
}