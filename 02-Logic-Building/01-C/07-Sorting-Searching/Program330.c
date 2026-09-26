// Accept Number from user in decimal and count number of bits on or 1
// Using Typedef
// Remove if Part

typedef unsigned int UINT;

#include<stdio.h>

int CountOnBits( UINT No)
{
    int iCnt = 0;
    int  Digit = 0;

    while(No != 0)
    {
        Digit = No % 2;
        iCnt = iCnt + Digit;
        No = No / 2;
    }
    return iCnt;
}

int main()
{  
     UINT Value = 0;
    int Ret = 0;

    printf("Enter Number : ");
    scanf("%d", &Value);

    Ret = CountOnBits(Value);

    printf(" Number of Bits Which is On : %d \n",Ret );

    return 0;
}

