/*
 Q - Accept  character from usera and display its ASCII value in decimal octal and hexadecimal fromat
  
  Input  : A
  Output : 
       Decimal : 65
       Octal   : 0101
       Hexadecimal : 0x41

*/
#include<stdio.h>

void Display(char ch)
{
    printf("character   :  %c\n",ch);
    printf("Decimal     :  %d\n",ch);
    printf("Octal       :  %o\n",ch); 
    printf("Hexadecimal :  %x\n",ch);    
}

int main()
{
   char cValue = '\0';

   printf("Enter the character : ");
   scanf("%c", &cValue);

   Display(cValue);

  return 0;
}
