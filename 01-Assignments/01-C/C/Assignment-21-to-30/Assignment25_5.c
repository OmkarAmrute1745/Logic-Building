/*
 Q -  Write a program which accept String from user and display it reverse order
      Input  :  "MarvellouS"
      Output :  "SuollevraM"
*/



#include<stdio.h>


void Reverse(char *str)
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
  
   Reverse(arr);

   printf("String in reverse format : %s",arr);

  return 0;
}