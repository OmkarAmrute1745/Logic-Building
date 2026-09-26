/*
Q - Accept N numbers from user and Display Summation of digits of each number 

  Input  : 
      N : 6 
      Elements : 8225  665  3  76  953  858
      Output   : 17    17    3  13  17  21
*/

#include<stdio.h>
#include<malloc.h>

void DigitsSum(int Arr[], int iLength)
{
   int iNo = 0;
   int iDigit = 0;
   int iSum = 0;

   for(int i = 0; i < iLength ; i++)
   {
        iNo = Arr[i];
        iSum = 0;
        while(iNo != 0)
        {
           iDigit = iNo % 10;
           iSum = iSum + iDigit;
           iNo = iNo / 10;
        }
        printf("%d \t",iSum);
   }

}
int main()
{
     int iSize = 0 , iCnt = 0 , iValue = 0;
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

       
       DigitsSum(p,iSize);


     free(p); 

    return 0; 
}