/*
  1. Pattern Printing 
     Input : 4
     Output : * * * *
*/
// 2  used Updater

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    } 

   for(int iCnt = 1; iCnt<= iNo ; iCnt++)
   {
      printf("*\t");
   }
}

int main()
{
   int iValue = 0;

   printf("Enter Number : ");
   scanf("%d",&iValue);

   Display(iValue);
 
    return 0;
}
 