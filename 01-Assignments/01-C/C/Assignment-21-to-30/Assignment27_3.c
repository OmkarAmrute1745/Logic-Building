/*
 Q - write a program which accept string from user accept one character
      return index of that character

   Input  : "Marvellos"
            M
   Output : 0

   Input  :  "Marvellous Info"
             e
   Output :  4

*/

#include<stdio.h>

int  FirstChar(char * str,char ch)
{
 int iCnt = 0;
 while(*str != '\0')
 {
     
    if(*str == ch)
    { 
        break;
    }
    iCnt++;
    str++;
 }
 return  iCnt;
}

int main()
{

  char Arr[20];
  char cValue = '\0';
  int  iRet = 0;
 
  printf(" Enter String : ");
  scanf("%[^'\n']s",Arr);

  printf("Enter Character : ");
  scanf(" %c",&cValue);

  iRet =  FirstChar(Arr,cValue);

  printf("Character Location is : %d ",iRet);

 return 0;
}