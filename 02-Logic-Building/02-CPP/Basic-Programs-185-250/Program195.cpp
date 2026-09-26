// Addition of Even Numbers  
// Additon odd numbers

#include<iostream>
using namespace std;

class ArrayX
{
  public :
       int *Arr;
       int iSize;

       ArrayX(int i)
       {
         iSize = i;
         Arr = new int[iSize];
       } 

       void Accept()
       {
         cout<<"Enter Number :  "<<"\n";
         
         for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
         {
            cin>>Arr[iCnt];
         }
       }

       void Display()
       {
          cout<<"Elements of Array are : "<<"\n";

          for(int iCnt = 0 ; iCnt < iSize ; iCnt++)
           {
              cout<<Arr[iCnt]<<"\t";
           }
           cout<<"\n";
       }

        int SumEven() 
       {
           int iSum = 0;
           int iCnt = 0;

           for(iCnt = 0 ; iCnt < iSize ; iCnt++)
           {
             if((Arr[iCnt] % 2 ) == 0)
             {
                iSum = iSum + Arr[iCnt];
             }
           }
           return iSum;
       }

       
        int SumOdd() 
       {
           int iSum = 0;
           int iCnt = 0;

           for(iCnt = 0 ; iCnt < iSize ; iCnt++)
           {
             if((Arr[iCnt] % 2 ) != 0)
             {
                iSum = iSum + Arr[iCnt];
             }
           }
           return iSum;
       }

};



int main()
{
    int iLength = 0;
    int iRet = 0;
    cout<<"Enter The Numbers of Elements : " <<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();

   iRet = obj.SumEven();
   cout<<"\n Addition of even Elements : " <<iRet;
    
    iRet = obj.SumOdd();
    cout<<"\n Addition of Odd Elements : "<<iRet;
    return 0;
}