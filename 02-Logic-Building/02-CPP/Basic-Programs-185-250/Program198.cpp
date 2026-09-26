//2. Dynamic 
#include<iostream>
using namespace std;

class ArrayX
{
   public: 
        int *Arr;   // Arr[] 
        int iSize;

        ArrayX(int i)
        {
            cout<<"Alloating the memory for resources..."<<"\n";
            iSize = i;
            Arr = new int[iSize];  // Arr = (int * )malloc(iSize * sizeof(int));
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

int main()
{
   int iLength = 0;
   cout<<"Enter the size of array : "<<"\n";
   cin>>iLength;

    ArrayX obj(iLength);  // Dynamic

   obj.Accept();
   obj.Display();

  return 0;
}