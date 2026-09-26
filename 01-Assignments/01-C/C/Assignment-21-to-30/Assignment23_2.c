/*
 Q - Accept  character from user and check whether it is Capital or not
  (A-Z)
   Input  : F
   Output : TRUE

   Inptut  : d
   Output  : FALSE
  
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
  if(ch >= 'A' && ch <= 'Z')
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
        printf("It is Capital character");
     }
     else
     {
        printf("It is not capital character");
     }
    return 0;
}