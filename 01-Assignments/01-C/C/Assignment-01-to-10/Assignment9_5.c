/*
 Q - write a program which returns diffrent between Even factorial and odd factorial
      of given number

    Input  : 5 
    Output : -7   (8 - 15)

    Input  : -5 
    Output :  -7 (8 - 15)

    Input  : 10
    Output : 2895 (3840 - 945)

*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = - iNo;
    } 
    
    int iSumEven = 1;
    int iSumOdd  = 1;
    int iDiff = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++ )
    {
         if((iCnt % 2) == 0 )  //  EvenFactorials 
         {
            iSumEven = iSumEven * iCnt;
         }
         else        // oddFact
         {
           iSumOdd = iSumOdd * iCnt;
         }
    }
      iDiff = iSumEven - iSumOdd;
    
    return iDiff ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf(" Factorial Diffence is %d ", iRet);

    return 0;
}