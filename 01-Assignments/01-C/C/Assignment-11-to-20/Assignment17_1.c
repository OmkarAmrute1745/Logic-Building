/*
  Q - Accept N numbers from user and return the largest number 
     Input  : 
         N  : 6
         Elements : 85  66  3  66  93  88
         Output   : 93
*/

#include<stdio.h>
#include<stdlib.h>

int MAximum(int Arr[],int iLength)
{
    int iMax = Arr[0] ;
    for(int i = 0 ; i < iLength ; i++ )
    {
      if(Arr[i] > iMax)
      {
        iMax = Arr[i];
      }
    }
   return iMax;
}

int main()
{
     int iSize = 0 , iCnt = 0 , iValue = 0 , iRet = 0;
     int *p = NULL;

     printf("Enter number of elements : ");
     scanf("%d",&iSize);

     p = (int * )malloc(iSize * sizeof(int));
     if(p == NULL)
     {
        printf("Unable to Allocate memory");
        return -1;
     }
     printf("\nEnter %d elements \n" , iSize);

     for(iCnt = 0 ; iCnt < iSize ; iCnt++)
     {
        printf("\n Enter Elements : %d : ", iCnt + 1);
        scanf("%d", &p[iCnt]);
     }

     iRet = MAximum(p,iSize);

     printf("\nLargest Number is %d \n " , iRet);

     free(p); 

    return 0; 
}