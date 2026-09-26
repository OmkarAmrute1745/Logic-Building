/*
 Q - Accept N numbers from user and return frequency of diffrence between even numbers and odd 
  
  Input  : 
      N : 7 
      Elements : 85  66  3  80  93  88  90
      Output   : 1  (4 - 3) 

*/

#include<stdio.h>
#include<malloc.h>

int Frequency(int Arr [] , int iLength)  
{
   int iCntEven = 0;
   int iCntOdd = 0;

    for(int i = 0 ; i < iLength ; i++ )
    {
       if((Arr[i] % 2) == 0 )
        {
            iCntEven ++;
        }
        else
        {
            iCntOdd ++;
        }
    }
   return iCntEven - iCntOdd;
}

int main()
{
    int iSize = 0, iRet = 0 , iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d" ,&iSize);

    p = (int * )malloc(iSize * sizeof(int));
   if(p == NULL)
   {
      printf("Unable to allocate memory \n");
      return -1;
   }
   
   printf("\n Enter %d elements  \n ",iSize);

   for(iCnt = 0 ; iCnt < iSize ; iCnt++ )
   {
       printf("\nEnter Elements : %d  :  ",iCnt + 1);
       scanf("%d",&p[iCnt]);
   }
   
   iRet = Frequency(p, iSize);
   printf("\nResult is %d \n", iRet);

   free(p);

   return 0;
}
