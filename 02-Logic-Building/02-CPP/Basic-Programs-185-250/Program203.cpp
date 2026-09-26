// explicite constructor call (minimum logic in seperete class)

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
};

class MarvellousLB : public ArrayX
{
    public:
         
         MarvellousLB(int i ) : ArrayX(i)
         {}
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

   MarvellousLB * obj = new MarvellousLB(iLength);
   
   obj->Accept();
   obj->Display();

   iRet = obj->Minimum();
   cout<<"Smallest element is : "<<iRet<<"\n";

   delete obj;

  return 0;
}