/*

  Write generic program to accept N values and count frequency of any specific 
  value.

Input : 10 20 30 10 30 40 10 40 10
Value to check frequency : 10
Output : 4

*/

#include<iostream>
using namespace std;

template<class T>
int Frequency(T *Arr, int iSize, T Value)
{
    int i = 0;
    int iCnt = 0;
    for(i = 0 ; i < iSize ; i++)
    {
        if (Arr[i] == Value)
        {
            iCnt++;
        }
    }   
    return iCnt;
}


int main()
{
   int arr[]={10,20,30,10,30,40,10,40,10};
   int iRet = Frequency(arr,9,10);
   cout<<iRet <<"\n"; // 4
 
   
   char arr1[]={'P','B','P','P','C','P','P','P','P'};
   iRet = Frequency(arr1,9,'P');
   cout<<iRet <<"\n"; // 7
 

  return 0;
}