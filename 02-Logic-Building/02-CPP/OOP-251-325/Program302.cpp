
// Addition example
// Double
// Specific

#include<iostream>
using namespace std;

int Addition(double i , double j)
{
    double iAns = 0 ;
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
