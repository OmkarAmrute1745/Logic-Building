/*
Accept number from user and return Smallest digit of that number
input  : 1234567
Output : 1
*/

#include<stdio.h>

int MinDigit(int iNo)
{
    int iDigit = 0;
    int iMin = 9;

    if (iNo < 0)  // Updater
    {
        iNo = -iNo;
    }

    while (iNo!= 0 )
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10;
    }
   return iMin;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number : ");
   scanf("%d",&iValue);

   iRet = MinDigit(iValue);

   printf("Smallest Digit is : %d", iRet);

    return 0;
}