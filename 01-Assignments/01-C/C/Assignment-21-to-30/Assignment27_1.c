/*
 Q - write a program which accept string from user and check whether character is present in string or not1

   Input  : "Marvellos"
            e
   Output : TRUE

   Input  :  "Marvellous Info"
            w
   Output :  FALSE

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkChar(char * str,char ch)
{
 BOOL bFlag = FALSE;

 while(*str != '\0')
 {
    if(*str == ch)
    { 
       bFlag = TRUE;   
    }
    str++;
 }
 return  bFlag;
}

int main()
{

  char Arr[20];
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf(" Enter String : ");
  scanf("%[^'\n']s",Arr);

  printf("Enter Character : ");
  scanf(" %c",&cValue);

  bRet =  chkChar(Arr,cValue);
   
   if(bRet == TRUE)
   {
      printf("Character Found ");
   }
   else 
   {
     printf("Character not Found");
   }
  
 return 0;
}