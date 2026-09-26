/*
5. Write generic program to accept N values and reverse the contents.
Input : 10 20 30 10 30 40 10 40 10
Output : 10 40 10 40 30 10 30 20 10

*/
#include<iostream>
using namespace std;

template<class T>
void Reverse(T *Arr , int iSize)
{
   T Start = 0;
   T End = iSize-1;
   T temp;

   while(Start <= End)
   {
      temp = Arr[Start];
      Arr[Start] = Arr[End];
      Arr[End] = temp;
      
    End --;
     Start++;
    
   }
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    for(int i = 0 ; i < 9 ; i++)
    {
        cout<<Arr[i] <<" ";
    }

    cout<<"\n";
    Reverse<int>(Arr,9);

   for(int i = 0 ; i < 9 ; i++)
   {
     cout<<Arr[i] <<" ";
   }

    return 0;
}
