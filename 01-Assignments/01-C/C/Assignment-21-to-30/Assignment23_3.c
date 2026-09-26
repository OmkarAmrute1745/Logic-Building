/*
 Q - Accept  character from user and check whether it is Capital or not
  (0-9)
   Input  : 7
   Output : TRUE

   Inptut  : d
   Output  : FALSE
  
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
  if(ch >= '0' && ch <= '9')
  {
    return TRUE;
  }
}

int main()
{
     char cValue = '\0';
     BOOL bRet = FALSE;

     printf("Enter the character : \n");
     scanf("%c",&cValue);

     bRet = ChkDigit(cValue);

     if(bRet == TRUE)
     {
        printf("It is Digit");
     }
     else
     {
        printf("It is not Digit");
     }
    return 0;
}