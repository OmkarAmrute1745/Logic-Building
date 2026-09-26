/*
 Q -  Write a program which accept String from user and check whether it contains vowel in it or not
      Input  :  "MarvellouS"
      Output : TRUE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int ChkVowel(char *str)
{
  int iCntC = 0;
  int iCntS = 0;

  while(*str != '\0')
   {    
      if(*str == 'A'|| *str == 'a' || *str == 'E'||*str == 'e'||*str == 'I' || *str == 'O'|| *str == 'o'|| *str == 'U' || *str == 'u')
      {
        return TRUE;            
      }   
    str++;
   }
  return FALSE;
}

int main()
{
  char arr[20];
  BOOL bRet = FALSE;

  printf(" Enter String : ");
  scanf("%[^'\n']s",arr);
  
  bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
       printf("Contains Vowel \n");
    }
    else
    {
       printf("There is no vowel \n");
    }
  return 0;
}