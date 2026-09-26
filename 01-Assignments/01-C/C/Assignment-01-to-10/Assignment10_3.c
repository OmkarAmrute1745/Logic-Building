/*
Q - Write a program which accept distance in kilometer and convert it into meter
    (1kilometer = 1000 meter)
*/
#include<stdio.h>

int KMtoMeter(int iNo)
{
     int meter = 1000;
   
     return iNo * meter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Distance : ");
    scanf("%d" , &iValue);

    iRet = KMtoMeter(iValue);

    printf(" %d Kilometer in meter : %d ",iValue,iRet);

    return 0;
}