/*
  6. Pattern Printing 
    
     Input : 4
     Output : 1   2   3   4    *  *  *  *  
*/
// 2 N time Compaxcity


#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    } 

   for(int iCnt = 1; iCnt <= iNo ; iCnt++)
   {
      printf("%d\t",iCnt);     
   }
   
   for(int iCnt = 1; iCnt <= iNo ; iCnt++)
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
 