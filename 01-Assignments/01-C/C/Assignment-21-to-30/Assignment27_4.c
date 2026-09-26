// *****************************
/*
 Q - write a program which accept string from user accept one character
      return index of that Last Occurance character

   Input  : "Marvellos multi os"
            M
   Output : 11

   Input  :  "Marvellous Info"
              w
   Output :  -1

*/

#include<stdio.h>

int   LastChar(char * str,char ch)
{
 int iCnt = 0;

 char *end = str;
 
 while(*end != '\0')
 {
     end++;
 }


 while(*str )
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

  iRet =  LastChar(Arr,cValue);

  printf("Character Location is : %d ",iRet);

 return 0;
}