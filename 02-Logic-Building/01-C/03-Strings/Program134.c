// strlenX
// cp
//1

#include<stdio.h>

int strlenX (char *str)
{  
    int icnt = 0;
   while(*str != '\0') 
   {
      icnt ++;
      str++;
   }
   return icnt;
}

int main()
{
    char Arr[20];
     int iRet = 0;

    printf("Enter String : ");
    scanf("%[^\n]s",Arr);

     iRet = strlenX(Arr);

     printf("Number of character are :  %d \n ",iRet);

    
  return 0;
}