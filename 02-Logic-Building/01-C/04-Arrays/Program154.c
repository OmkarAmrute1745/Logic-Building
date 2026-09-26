// Calculate white spaces

#include<stdio.h>

int CountSpace(char *str)
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
     printf("Enter String \n");
     scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);

     printf("String after conversion is : %s\n",Arr);
     
     printf("Number of white spaces are : %d ",iRet);

    return 0;
}
