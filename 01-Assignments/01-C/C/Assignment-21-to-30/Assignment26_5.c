/*
 Q - write a program which accept string from user and Count number of white spaces

   Input  : "Marvellos"
   Output : 0

   Input  :  "Marvellous Info"
   Output :  1

*/

#include<stdio.h>

int CountWhite(char * str)
{
 int iCnt = 0;
 while(*str != '\0')
 {
    if(*str == ' ')
    {
        iCnt++;
    }
    str++;
 }
 return iCnt;
}

int main()
{

  char Arr[20];
   int iRet = 0;
  printf(" Enter String : ");
  scanf("%[^'\n']s",Arr);

  iRet =  CountWhite(Arr);
  
  printf("%d",iRet);

 return 0;
}