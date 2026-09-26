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
    double a = 11.9, b = 10.1 , dRet = 0;
    dRet = Addition(a,b);
    cout<<"Addition is  : "<<dRet <<"\n";

    int x = 11, y = 10 , iRet = 0;
    iRet = Addition(x,y);
    cout<<"Addition is  : "<<iRet <<"\n";
    
    return 0;
}
