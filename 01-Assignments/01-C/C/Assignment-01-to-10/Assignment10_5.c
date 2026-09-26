/*
 Q - Write a program which accept area in squre feet and convert it into squre meter 
      (1 square feet = 0.0929 Squre meter)
     
     Input  : 5
     Output : 0.464515

     Input  : 7
     Outut  : 0.650321
*/

#include<stdio.h>

double SqureMeter(float iValue)
{    
       float d;
      d = iValue * 0.0929; 
  return  d;
}

int main()
{
   int  iValue = 0;
  double dRet = 0.0;
     
     printf("Enter area in squre feet : ");
     scanf("%d",& iValue);

     dRet = SqureMeter(iValue);

    printf("%d area in squre feet convert into Squre meter : %lf",iValue,dRet);
    return 0;
}
