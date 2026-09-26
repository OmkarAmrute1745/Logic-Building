/*
 Q - Write a Program which accept number from user and return  count of Odd digits

    Input  :  2395
    Output :  3
   
    Input  : 1018
    Output : 2

    Input  : -1018
    Output : 2

    Input  : 8462
    Output : 0
*/

#include<stdio.h>

int CountOdd(int iNo)
{
    
    int iDigit = 0;
    int CountOdd = 0;

      while(iNo != 0)
      {
         iDigit = iNo % 10;
          
          if((iDigit % 2) != 0 )
          {
            CountOdd ++ ;        
          }
        iNo = iNo / 10;
      }
     return CountOdd;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Odd Nos Count  : %d",iRet); 

    return 0;
}