//1. Addition of even digits


#include<iostream>
using namespace std;

class DigitX
{
    public:
        int iNo;
    
    DigitX()
    {
        iNo = 0;
    }
    DigitX(int i)
    {
        iNo = i;
    }
    
    int SumEvenDigit()
    {
        int iSum = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
              if((iDigit % 2) == 0)
              {
                iSum = iSum + iDigit;
              }
            iNo = iNo / 10;
        }
       return iSum;
    }

};

int main()
{
   
   int iValue = 0;
   int iRet = 0;
   cout<<"Enter Number : "<<"\n";
   cin>>iValue;

   DigitX obj(iValue);
  
   iRet = obj.SumEvenDigit();     
   cout<<"Summation of Even Digits : "<<iRet<<"\n";
   
   cout<<obj.iNo; // Problem it is 0 
    return 0;
}