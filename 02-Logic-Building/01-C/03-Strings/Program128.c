//  check Capital

#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch)
{
   if((ch >= 'A') && (ch <= 'Z'))
   {
      return true;
   }
   else
   {
     return false;
   }
}

int main()
{
      char cValue = '\0';
    bool bRet = false;

    printf("Enter One Character : \n");
    scanf("%c",&cValue);
    
    bRet = IsCapitalX(cValue);
   
   if(bRet == true)
   {
      printf("%c is a capital case letter \n",cValue);
   }
   else
   {
      printf("%c is not capital case letter \n",cValue);
   }

    return 0;
}