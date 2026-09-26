/*
Q - write a progrma which accept range from user and display all numbers in between that range
   Input  : 23  35
   Output : 23  24  25  36  27  28  29  30  31  32  33  34  35

   Input  : 10  10
   Output : 10

   Input  : 91  18 
   Output : Invalid range
*/

#include<stdio.h>


void RangeDisplay(int iStrt,int iEnd)
{ 
   if(iStrt > iEnd)
   {
      printf("Invalid Range");
   }

   for(int i = iStrt; i<=iEnd; i++)
   {
      printf("%d \t",i);
   }
}

int main()
{
   int iValue1 = 0,iValue2 = 0 ;
   
   printf(" Enter Starting Point :");
   scanf("%d",&iValue1);

   printf("Enter Ending Point :");
   scanf("%d",&iValue2);

   RangeDisplay(iValue1,iValue2);

   return 0;
}