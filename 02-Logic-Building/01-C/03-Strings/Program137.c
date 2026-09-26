// strlenX
// cp
// using index

// 4 
// Using for loop

#include<stdio.h>

int strlenX (char str[])
{  
    int icnt = 0,i = 0;
   
    for(i = 0; str[i] != '\0'; i++)
    {
        icnt++;
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