// Generic Programming
// Addition example


#include<iostream>
using namespace std;

template <class T>  

int Addition(T i , T j)
{
     T iAns ;
     iAns = i + j;

    return iAns;
}

int main()
{
    double a = 11.9, b = 10 , iRet = 0;

    iRet = Addition(a,b);

    cout<<"Addition is  : "<<iRet <<"\n";

    return 0;
}
