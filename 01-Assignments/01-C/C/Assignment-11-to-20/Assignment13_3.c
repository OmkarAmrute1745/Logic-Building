/*
 Q - Write a Program which accept number from user and return  count of digits in between 3 and 7

    Input  :  2395
    Output :  1
   
    Input  : 1018
    Output : 0

    Input  : 4521
    Output : 2

    Input  : 9922
    Output : 0
*/

#include<stdio.h>

int CountRange(int iNo)
{
    
    int iDigit = 0;
    int Count = 0;

      while(iNo != 0)
      {
         iDigit = iNo % 10;
          
          if((iDigit > 3 ) && (iDigit < 7) )
          {
            Count ++ ;        
          }
        iNo = iNo / 10;
      }
     return Count;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("Count digit  between 3 And 7  : %d",iRet); 

    return 0;
}