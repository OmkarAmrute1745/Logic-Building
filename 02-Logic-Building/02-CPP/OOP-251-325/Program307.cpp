// specific Swap

#include<iostream>
using  namespace std;

// call by Reference
void Swap(int &x , int &y)
{
   int temp ;

   temp = x;
   x = y;
   y = temp;
}

int main()
{
   int a = 11; 
   int b = 10;

   cout<<"Value of A : " <<a <<"\n";
   cout<<"Value of B : " <<b <<"\n";

   Swap(a,b);

    cout<<"Value of A : " <<a <<"\n";
    cout<<"Value of B : " <<b <<"\n";
     
   


     return 0;
}