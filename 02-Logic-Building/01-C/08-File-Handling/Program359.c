// Accept No from user and Count Digits
// using iteration

#include<stdio.h>
#include<stdbool.h>

int CountDigitI(int No)
{
    int iCnt = 0;

    while(No != 0)
    {
        iCnt++;
        No = No / 10;
    }
    return iCnt;
}

int main()
{
   int Value = 0, iRet = 0;
   
   printf("Enter the Number :  \n");
   scanf("%d",&Value);

   iRet = CountDigitI(Value);
   
   printf(" Number of Digits are : %d",iRet);

    return 0;
}