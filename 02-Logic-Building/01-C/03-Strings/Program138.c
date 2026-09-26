/*
 Accept string  calculate occurance of a 
*/

#include<stdio.h>

int CountCh(char *str)
{
   int iCnt = 0;
   while(*str != '\0')
   {
     if(*str == 'a')
     {
       iCnt++;
     }
     str++;
   }
   return iCnt;
}

int main()
{
   char Arr[10];
   int iRet = 0;

   printf("Enter String : ");
   scanf("%[^'\n']s",Arr);

   iRet = CountCh(Arr);
   printf("Frquency of a is : %d \n",iRet);

  return 0;   
}