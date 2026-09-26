/*
 Q - write a program to find even factorial of given number
    Input  : 5 
    Output : 8   (4 * 2)

    Input  : -5 
    Output :  8 (4 * 2)

    Input  : 10
    Output : 3840 (10 * 8 * 6 * 4 * 2)

*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    } 
    
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++ )
    {
         if((iCnt % 2) == 0 )  //  evenFactorials 
         {
            iFact = iFact * iCnt;
         }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d ", iRet);

    return 0;
}