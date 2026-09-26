// Accept string and Count Small letters

#include<stdio.h>

int CountCapR(char * str)
{    
    static int iCnt = 0;

     if(*str != '\0')
     {
         if(*str >= 'a' && *str <= 'z')
         {
            iCnt++;
         }
         str++;
         CountCapR(str);
     }
     return iCnt;
}

int main()
{
   char Arr[20];
  int iRet = 0;

  printf("\n Enter String : ");
  scanf("%[^'\n']s",Arr);

  iRet = CountCapR(Arr);

  printf("Capital Count is : %d \n ",iRet);

    return 0;
}
