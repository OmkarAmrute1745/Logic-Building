//Generic Swap 

#include<iostream>
using  namespace std;


template <class T>  
void Swap(T &x , T &y)
{
   T temp ;

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
     
    double p = 12.9 , q = 18.7;
    cout<<"Value of p : " <<p <<"\n";
    cout<<"Value of q : " <<q <<"\n";
    Swap(p,q);
    cout<<"Value of p : " <<p <<"\n";
    cout<<"Value of q : " <<q <<"\n"; 
   


     return 0;
}