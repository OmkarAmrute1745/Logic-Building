/*
 Accept n numbers from user and return average of that numbers  

*/

#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr, int  iSize)
float Average(int Arr[],int iSize)
{
  int iSum = 0, iCnt = 0;

  for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
  {
     iSum = iSum + Arr[iCnt];
  }

  return (iSum/iSize);
}

int main()
{  
   int * ptr = NULL;
   int iLength = 0;
   float fRet = 0.0f;

   printf("Enter the numbers of elements : ");
   scanf("%d",&iLength);

   ptr = (int * )malloc(iLength * sizeof(int));
    // ptr = (int *)malloc(5 * 4)

   printf("Enter the numbers : ");
      // 1           2          3
   for(int i = 0 ; i < iLength; i++)
   {
      scanf("%d",&ptr[i]);   //4
   }
   
   fRet = Average(ptr,iLength);
    //fRet = average(500,5);
   printf("Average is : %f\n",fRet);
   
   free(ptr);

    return 0;
}