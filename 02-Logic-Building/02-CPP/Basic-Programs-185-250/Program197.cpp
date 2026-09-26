// 1. Static
#include<iostream>
using namespace std;

class ArrayX
{
   public: 
        int *Arr;   // Arr[] 
        int iSize;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];  // Arr = (int * )malloc(iSize * sizeof(int));
        }

        ~ArrayX()
        {
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
   
   ArrayX obj(5);  // Static & Hardcoded

   obj.Accept();
   obj.Display();

  return 0;
}