/*
  Q - Write a program which accept string from user and reverse that string in place 

Input  : abcd 
Output : dcba
*/
#include<stdio.h>


void StrRevX(char *str)
{

  char *end = str;
  char *start = str;
  char temp = '\0';

  while(*end != '\0')
   {    
      end++;
   }
   
    end--;

    while(start < end)
    {
      temp = *start;
      *start = *end;
      *end = temp;
      
       start++;
       end--;
    }
}

int main()
{
  char arr[20];

  printf(" Enter String : ");
  scanf("%[^'\n']s",arr);
  
    StrRevX(arr);

   printf(" Modified String is : %s",arr);

  return 0;
}