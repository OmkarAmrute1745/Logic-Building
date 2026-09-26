/*
2. Write generic program to find largest number from three numbers.
template<class T>
T Max(_______ , ___________ , _________)
{
// Logic
}

 
*/


#include<iostream>
using namespace std;


template<class T>
T Max(T a , T b , T c)
{
   if(a > b && a > c)
   {
      cout<< a << " is Largest \n";
   }
   else if(b > a && b > c)
   {
        cout<< b << " is Largest\n";
   }
   else
   {
     cout<< c <<" is Largest\n";
   }
}

int main()
{
    Max(11,21,51);
    Max('p','a','b');

    return 0;
}