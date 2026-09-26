/*
Accept number from user and return largest digit of that number
input  : 1234567
Output : 7
*/
// filter 

#include<stdio.h>

int MaxDigit(int iNo)
{
    int iDigit = 0;
    int iMax = 0;
    int iCnt = 0;

    if (iNo < 0)  // Updater
    {
        iNo = -iNo;
    }

    while (iNo!= 0 )
    {
        iDigit = iNo % 10;
         iCnt ++;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        if(iMax == 9)    // ***
        { 
            break;
        }
      iNo = iNo / 10;
    }
    printf("Counter : %d \n",iCnt);

   return iMax;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number : ");
   scanf("%d",&iValue);

   iRet = MaxDigit(iValue);

   printf("Largest Digit is : %d", iRet);

    return 0;
}