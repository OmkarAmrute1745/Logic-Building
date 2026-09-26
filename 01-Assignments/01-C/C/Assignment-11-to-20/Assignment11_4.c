/*
Q - write a progrma which accept range from user and return addition all even numbers 
    in between that range(Range should contains positive numbers only)
   
   Input  : 23  30
   Output : 108

   Input  : 10  18
   Output :  70
   
   Input  : -10  2
   Output : Invalid range
   
   Input  : 91  18 
   Output : Invalid range
*/

#include<stdio.h>


int RangeSumEven(int iStrt,int iEnd)
{ 
    int iSum = 0;
   if(iStrt < 0 || iEnd < 0)
   {
      return -1;
   }

   if(iStrt > iEnd)
   {
       return -1;
   }
   
   for(int i = iStrt; i<=iEnd; i++)
   {
         if(i % 2 == 0 )
        {
           iSum  =   iSum + i; 
        }
   }
   return iSum;
}

int main()
{
   int iValue1 = 0,iValue2 = 0 ,iRet = 0;
   
   printf("Enter Starting Point : ");
   scanf("%d",&iValue1);

   printf("Enter Ending Point : ");
   scanf("%d",&iValue2);

   iRet =  RangeSumEven(iValue1,iValue2);
    if(iRet == -1)
    {
        printf("Invalid Range \n");
    }
    else
    {
      printf("Addition is : %d", iRet);
    }
   return 0;
}