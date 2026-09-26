/*
 Q - Accept N numbers from user and check whether that number contains 11 in it or not
  Input  : 
      N : 6
      Elements : 85  66  11  80  93  88  
      Output   : 11 is present 

*/

#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr [] , int iLength)  
{
    BOOL flag = FALSE;
   
    for(int i = 0 ; i < iLength ; i++ )
    {
       if((Arr[i]) == 11 )
        {
             flag = TRUE;
        }
    }
   return flag;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;
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
   
   bRet = Check(p, iSize);
    if(bRet == TRUE)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is Absent");
    }
   free(p);

   return 0;
}
