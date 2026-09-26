// Template for Problems on N numbers 

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

       void Function() // Fun contains Bussiness Logic
       {
         // Logic
       }
};


int main()
{
    int iLength = 0;

    cout<<"Enter The Numbers of Elements : " <<"\n";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Function();
    obj.Display();

    return 0;
}