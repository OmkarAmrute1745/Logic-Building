//  check small // using number ascci value 

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
   if((ch >= '97') && (ch <= '122'))
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
    
    bRet = CheckSmall(cValue);
   
   if(bRet == true)
   {
      printf("%c is a small case letter \n",cValue);
   }
   else
   {
      printf("%c is not small case letter \n",cValue);
   }

    return 0;
}