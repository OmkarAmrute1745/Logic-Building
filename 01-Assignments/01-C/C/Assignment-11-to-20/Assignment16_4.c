/*
 Q - Accept N numbers from user and Accept Range Display all elements from that range
  
  Input  : 
      N : 6 
      Start : 60
      End   : 90

               // 0   1   2  3   4   5
      Elements : 85  66  3  76  93  88
      Output   : 66  76  85  88

*/
    
#include<stdio.h>
#include<malloc.h>

int Range(int Arr [] , int iLength, int iStart , int iEnd)  
{
    int i = 0;

    for( i = 0 ; i < iLength  ; i++ )
    {
       if((Arr[i] ) > iStart && Arr[i] < iEnd )
        {
             printf("%d ", Arr[i] );
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0 , iCnt = 0;
    int *p = NULL;
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of elements : ");
    scanf("%d" ,&iSize);
    
    printf("Enter Starting Point  : ");
    scanf("%d",&iValue1);

   printf("Enter Ending Point: ");
   scanf("%d",&iValue2);

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
   
   

     Range(p, iSize, iValue1,iValue2);
   
   free(p);

   return 0;
}
