/*
  Accept 5 number from user perform the addition of that numbers display addition
  Input  :  1  2  3  4  5
  Output :  15
*/
// using static memory allocation


#include<stdio.h>
#include<stdlib.h>

int Summation(int Data[], int iSize)
{
  int iCnt = 0; 
  int iSum = 0;

  for(iCnt = 0; iCnt < iSize ; iCnt++)
  {
     iSum = iSum + Data[iCnt];
  }
    return iSum;
}

int main()
{
   int Arr[5];  // Static memory allocation
   int iCnt = 0;
   int iRet = 0;

   printf("Enter the Elements : \n");
   for (iCnt = 0; iCnt < 5 ; iCnt++)
   {
     scanf("%d",&Arr[iCnt]);
   }

  printf("Elements from array are : \n ");
  for (iCnt = 0; iCnt < 5 ; iCnt++)
   {
        printf("%d\n",Arr[iCnt]);
   }

    iRet = Summation(Arr,5);
    printf("Addition of all elements is : %d \n",iRet);    
    return 0;
}