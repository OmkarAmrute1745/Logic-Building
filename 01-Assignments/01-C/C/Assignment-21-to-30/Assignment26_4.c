/*
 Q - write a program which accept string from user and Display only Digits from that string

   Input  : "marve89llous121"
   Output : 89121

   Input  :  "Demo"
   Output :  

*/

#include<stdio.h>

void DisplayDigit(char * str)
{
 
 while(*str != '\0')
 {
    if(*str > '0' && *str < '9')
    {
        printf("%c",*str);
    }
    str++;
 }

}

int main()
{

  char Arr[20];

  printf(" Enter String : ");
  scanf("%[^'\n']s",Arr);

  DisplayDigit(Arr);
  
    return 0;
}