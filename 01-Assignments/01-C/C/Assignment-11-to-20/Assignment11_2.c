/*
Q - write a progrma which accept range from user and display all even in between that range
   
   Input  : 23  35
   Output : 24  26  28  30  32  34

   Input  : 10  18
   Output : 10  12  14  16  18
   
   Input  : -10  2
   Output : -10  -8  -6  -4  -2   0   2
   
   Input  : 91  18 
   Output : Invalid range
*/

#include<stdio.h>


void RangeDisplayEven(int iStrt,int iEnd)
{ 
   if(iStrt > iEnd)
   {
      printf("Invalid Range");
   }
   
   for(int i = iStrt; i<=iEnd; i++)
   { 
     if(i % 2 == 0)
      {
        printf("%d \t",i);
      }
   }
}

int main()
{
   int iValue1 = 0,iValue2 = 0 ;
   
   printf("Enter Starting Point : ");
   scanf("%d",&iValue1);

   printf("Enter Ending Point : ");
   scanf("%d",&iValue2);

   RangeDisplayEven(iValue1,iValue2);

   return 0;
}