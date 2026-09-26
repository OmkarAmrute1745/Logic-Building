/*
Q - write a progrma which accept range from user and display all numbers 
     in between that range in reverse order   
   
   Input  : 23  30
   Output :  35  34  33  32  31  30  29  28  27  26  25  24  23

   Input  : 10  18
   Output :  18  17  16  14  13  12  11  10
   
   Input  : -10  2
   Output :  2  1  0  -1  -2  -3  -4  -5  -6  -7  -8  -9  -10
   
   Input  : 91  18 
   Output : Invalid range
*/

#include<stdio.h>


void RangeDisplayRev(int iStrt,int iEnd)
{ 
   if(iStrt > iEnd)
   {
      printf("Invalid Range");
   }

   for(int i = iEnd; i>=iStrt; i--)
   {
      printf("%d \t",i);
   }
}

int main()
{
   int iValue1 = 0,iValue2 = 0 ;
   
   printf(" Enter Starting Point : ");
   scanf("%d",&iValue1);

   printf("Enter Ending Point : ");
   scanf("%d",&iValue2);

   RangeDisplayRev(iValue1,iValue2);

   return 0;
}