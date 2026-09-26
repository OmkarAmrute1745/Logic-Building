// Addition of Array Elements using Recursion

#include<stdio.h>

int Sum(int Arr[], int iSize)
{
   static int iCnt = 0;
   static int iSum = 0;
      if (iCnt< iSize)
     {
        iSum = iSum + Arr[iCnt];
        iCnt++;
        Sum(Arr,iSize);
    }
    return iSum;
}

int main()
{ 
     int Brr[5]  = { 10 ,20,30,40,50};
     int iRet = 0;

     iRet = Sum(Brr,5);

     printf("Addition is : %d ", iRet);

    return 0;
}