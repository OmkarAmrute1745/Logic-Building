/*
  Accept n numbers to array
  accept one number and count that number frequency
  Input  :  10  20  10 30 10  40  50  10  20  30  40  50
  Input  :  10
  Output :  4  
*/


#include<stdio.h>
#include<stdlib.h>

 int  CalulateFrequency(int Arr[], int iSize,int iNo)
{
    int iCnt = 0 , ifrequency = 0;

     
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            ifrequency ++;
        }

    }
    return ifrequency;
}


int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;
    int iValue = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
   
   printf("Enter the element to count Frequency  : ");
   scanf("%d",&iValue);
    // Step 4 : Call the function
     iRet =  CalulateFrequency(ptr, iLength,iValue);
   
   printf("Frequency is %d is %d ",iValue,iRet);
    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}