/*
 Q -  Write a program which accept String from user and return difference between small characters and capital character
  Input  :  "MarvellouS"
  Output : 6  (8 - 2)
*/

#include<stdio.h>

int Difference(char *str)
{
  int iCntC = 0;
  int iCntS = 0;

  while(*str != '\0')
  {
    
     if(*str >='A' && *str<='Z')
     {
       iCntC ++;
     }
     if(*str >= 'a' && *str<='z')
     {
        iCntS++;
     }
    str++;    
  }
  return iCntC - iCntS;
}

int main()
{
  char arr[20];
  int iRet = 0;

  printf(" Enter String : ");
  scanf("%[^'\n']s",arr);
  
  iRet = Difference(arr);

  printf(" %d ",iRet);

  return 0;
}