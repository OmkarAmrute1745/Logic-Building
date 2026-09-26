/*
3. Write generic program to accept N values and search first occurrence of any 
specific value.
Input : 10 20 30 10 30 40 10 40 10
Value to search : 40
Output : 6


*/

#include<iostream>
using namespace std;

template<class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
   int i = 0; 
     for(i = 0 ; i < iSize ; i++)
     {
        if(arr[i] == iNo)
        {
            break;
        }
     }
     if(i == iSize)
     {
        return - 1;
     }
     else
     {
        return i + 1;
     }
}

int main()
{
      int arr[]={10,20,30,10,30,40,10,40,10};
      int iRet = SearchFirst(arr,9,40); 
      cout<<iRet <<"\n";   // 6 
      
      char arr1[]={'A','B','S','J','N','Q','P','P','P'};
      iRet = SearchFirst(arr1,9,'P');
      cout<<iRet <<"\n"; // 7
 
   return 0;
}