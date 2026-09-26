/*
 Q - Accept N numbers from user accept one another number and check whether No is present or not 
  
  Input  : 
      N : 6 
      No : 66
      Elements : 85  66  3  80  11  88
      Output   : TRUE

*/
    
#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL check(int Arr [] , int iLength, int iNo)  
{
    BOOL Flag = FALSE;
    for(int i = 0 ; i < iLength ; i++ )
    {
       if((Arr[i] ) == iNo )
        {
            Flag = TRUE;
        }
    }
   return Flag;
}

int main()
{
    int iSize = 0 , iCnt = 0;
    int *p = NULL;
    int iValue = 0;
    BOOL bRet = FALSE;

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
   
   printf("Enter No to Check Present Or Not : ");
   scanf("%d",&iValue);

   bRet = check(p, iSize, iValue);

    if(bRet == TRUE)
    {
        printf("Number is Present");
    }
    else
    {
        printf("Number  is Not Present");
    }

   free(p);

   return 0;
}
