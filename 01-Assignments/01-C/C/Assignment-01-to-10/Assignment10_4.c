/*
  Q - Write a program which accept temperature in fahrenheit and convert it into celsius
      (1 celsius = (Fahrenheit - 32) * (5/9))

      Input  : 10
      Output : -12.2222 ( 10 -32 ) * (5 / 9)

      Input  : 34 
      Output : 1.11111 (34 - 32) * (5/9)
*/

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dcelsius = 0.0;
    dcelsius = ((fTemp - 32) * 5/9 );
    return dcelsius;
}

int main()
{
   float fValue = 0.0;
   double dRet = 0.0;

   printf("Enter Temperature in Fahrenheit :  ");
   scanf("%f",&fValue);

   dRet = FhtoCs(fValue);

   printf("temp in celsius :  %lf ",dRet);

    return 0;
}