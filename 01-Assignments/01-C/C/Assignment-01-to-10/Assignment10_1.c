/*
  Q - write a program which accept radius of circle from user and calculate its area 
      consider value of PI as 3.14 ( Area = PI * Radius * Radus)

      Input  : 5.3
      Output : 88.2026

      Input  : 10.4
      Output : 339.6224

*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    const float PI = 3.14;
    float fArea = 0.0f;
    fArea = PI * fRadius * fRadius;
   
    return fArea;    
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

     printf("Area of Circle : %lf \n",dRet);  
  
    return 0;
}