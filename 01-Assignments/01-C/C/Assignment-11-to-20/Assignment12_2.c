/*
 Q - Write a program which accept number from user and check whether it contains 0 in or not
   
   Input  : 2395
   Output :  there is no zero
  
    Input  : 1018
    Output : it contains Zero

    Input  : 9000
    Output : It Contains zero
    
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{   
    BOOL flag = FALSE;
    int iDigit = 0;
    int iC = iNo;
    int iCnt = 0;
   
  while(iC > 0)
{
    iDigit = iC % 10;
    iC = iC / 10;
    iCnt ++;
}


    while(iNo >= iCnt)
 {

   iDigit = iNo % 10;
   
   if(iDigit == 0)
   {
        flag = TRUE;
        break; 
   }
   iNo = iNo / 10;
 }
    return flag;
}

int main()
{
     int iValue = 0;
     BOOL bRet = FALSE;

     printf("Enter Number : ");
     scanf("%d",&iValue);

     bRet = ChkZero(iValue);
    
     if(bRet == TRUE)        
     {
        printf("It Contains Zero");
     }
     else
     {
        printf("There is No Zero");
     }

    return 0;
}
