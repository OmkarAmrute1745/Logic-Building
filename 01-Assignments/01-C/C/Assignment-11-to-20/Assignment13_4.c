/*
 Q - Write a Program which accept number from user and return  multiplaication of digits

    Input  :  2395
    Output :  270
   
    Input  : 1018
    Output : 8

    Input  : 9440
    Output : 144

    Input  : 922432
    Output : 864
*/

#include<stdio.h>

int MultiDigits(int iNo)
{
    
    int iDigit = 0;
    int iMult = 1;
    
      while(iNo != 0)
      {
         iDigit = iNo % 10;
        
          if(iDigit == 0)   
          {
            iDigit = 1;
          }

         iMult = iMult * iDigit;
         iNo = iNo / 10;
      }
     return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("Multiplication of digits  : %d",iRet); 

    return 0;
}