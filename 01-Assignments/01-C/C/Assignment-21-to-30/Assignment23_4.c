/*
 Q - Accept  character from user and check whether it is Capital or not
  (A-Z)
   Input  : g
   Output : TRUE

   Inptut  : D
   Output  : FALSE
  
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
  if(ch >= 'a' && ch <= 'z')
  {
    return TRUE;
  }
}

int main()
{
     char cValue = '\0';
     BOOL bRet = FALSE;

     printf("Enter the character : ");
     scanf("%c",&cValue);

     bRet = ChkAlpha(cValue);

     if(bRet == TRUE)
     {
        printf("It is small character");
     }
     else
     {
        printf("It is not small character");
     }
    return 0;
}