// minimum number in one class

#include<iostream>
using namespace std;

class ArrayX
{
   public: 
        int *Arr;  
        int iSize;

        ArrayX(int i)
        {
            cout<<"Alloating the memory for resources..."<<"\n";
            iSize = i;
            Arr = new int[iSize]; 
        }

        ~ArrayX()
        {   
             cout<<"Deallocating the memory of Resources..."<<"\n";
            delete []Arr;   //free(Arr);
        }

        void Accept()
        {
            cout<<"Enter the Elements Of Array : "<<"\n";

            for(int iCnt = 0 ; iCnt < iSize; iCnt++ )
            {
                cin>>Arr[iCnt]; // scanf("%d",&Arr[i]);
            }
        }

        void Display()
        {
            cout<<"Elements of Array are : " <<"\n";

            for(int iCnt = 0 ; iCnt < iSize ; iCnt++ )
            {
               cout<<Arr[iCnt] <<"\t";
            }
            cout<<"\n";
        }
        
        int Minimum()
        {
           int iMin = Arr[0];

           for(int iCnt = 0 ; iCnt < iSize; iCnt++)
           {
              if(Arr[iCnt] < iMin)
              {
                 iMin = Arr[iCnt];
              }
           }           
           return iMin;
        }
};

int main()
{
   int iLength = 0;
   int iRet = 0;

   cout<<"Enter the size of array : "<<"\n";
   cin>>iLength;

    ArrayX * obj = new  ArrayX(iLength);  // Dynamic using new ptr

   obj->Accept();
   obj->Display();
   
    iRet = obj->Minimum();
    cout<<"Smallest Element is : "<<iRet<<"\n"; 

   delete obj;   // Call Explicitely
  return 0;
}