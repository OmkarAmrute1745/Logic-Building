


//2 Summation of 5 numbers 
#include<stdio.h>

int Summation()
{
    int iNo1 = 1;
    int iNo2 = 2;
    int iNo3 = 3;
    int iNo4 = 4;
    int iNo5 = 5;
    int isum = 0;

     isum = isum+ iNo1;
     isum = isum+ iNo2;
     isum = isum+ iNo3;
     isum = isum+ iNo4;
     isum = isum+ iNo5; 

   return isum;
}

int main()
{
    int iRet = 0;

    iRet = Summation();

    printf("Summation is : %d\n",iRet);
 
    return 0;
}