/*
 Q - Accept Amount in US doller and return its corresponding value in indian Currency
  Consider 1$ as 70 rupees

  Input  : 10 
  Output : 700

  Input  : 3 
  Output : 210

  Input  : 1200
  Output : 84000

*/

#include<stdio.h>

int DollerToINR(int iNo)
{
    int Us_Doller = 70;
   return iNo * Us_Doller;
}

int main()
{
  int iValue = 0 ,iRet = 0;

  printf("Enter Number of USD : ");
  scanf("%d",&iValue);

  iRet = DollerToINR(iValue);

  printf("Value in INR is : %d ",iRet);

    return 0;
}