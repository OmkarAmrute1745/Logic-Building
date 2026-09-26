/*
 Q - write a program to find Odd factorial of given number
    Input  : 5 
    Output : 15   (5 * 3 * 1)

    Input  : -5 
    Output :  15 (5 * 3 *1)

    Input  : 10
    Output : 945 (9 * 7 * 5 * 3 * 1)

*/

#include<stdio.h>

int OddFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    } 
    
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++ )
    {
         if((iCnt % 2) != 0 )  //  oddFactorials 
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d ", iRet);

    return 0;
}