/*
 Q - Write a program which accept width and height of rectangle from user and calculate its area
    (Area = width * Height)

    Input  : 5.3  9.78
    Output : 51.834
*/

#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    return fWidth * fHeight;
}

int main()
{
    float fValue1 = 0.0f , fValue2 = 0.0f;
    double dRet = 0.0f;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle  : %lf ",dRet);

    return 0;
}
