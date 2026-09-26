/*
  Q - write a program which accept total marks and obtained 
       marks from user and calculate percentage
    Input  : 1000   745
    Output : 74.5%   
*/
#include<stdio.h>

float Percentage(int itotal, int imarks)
{   
    float iAns  = 0;
    iAns = (float)imarks / itotal * 100.0 ;
    return iAns;
} 

int main()
{
  int iValue1 = 0, iValue2 = 0;
  float fRet = 0.0f;

    printf("Enter total marks  : ");
    scanf("%d",&iValue1);
    
    printf("Enter Obtained Marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage  : %f",fRet);

    return 0;
}