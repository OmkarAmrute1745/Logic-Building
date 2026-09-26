/*
 Q - Accept N numbers from user and Accept another number  return
    index of Last occurance of that No 
  
  Input  : 
      N : 6 
      No : 66   // 0   1   2  3   4   5
      Elements : 85  66  3  66  11  88
      Output   : 3

*/
    
#include<stdio.h>
#include<malloc.h>

int LastOcc(int Arr [] , int iLength, int iNo)  
{
   int iCnt = -1;
   int i = 0;

    for( i = iLength - 1 ; i >= 0 ; i-- )
    {
       if((Arr[i] ) == iNo )
        {
             break;
        }
    }

    if(i == -1)
    {
        return -1;
    }
    else
    {
        return i;
    }

}

int main()
{
    int iSize = 0, iRet = 0 , iCnt = 0;
    int *p = NULL;
    int iValue = 0;
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
   
   printf("Enter No to check last occurance : ");
   scanf("%d",&iValue);

   iRet = LastOcc(p, iSize, iValue);
   
   if(iRet == -1)
   {
    printf("There is no such number");
   }
   else
   {
      printf("Last Occurance of number is :  %d", iRet);
   }
  
   free(p);

   return 0;
}
