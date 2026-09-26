/*
 Q - Accept character from user  if character is small display its corresponding captial 
     character and if it is small then display its correcponding captial 
     in other case display as it is 
  
  Input  : Q
  Output : q
 
  Input  : m
  Output : M

  Input  : 4
  Output : 4

  Input  : %
  Output : %   

*/

#include<stdio.h>

void Display(char ch)
{ 
    char c = '\0';
  if(ch >= 'A' && ch <= 'Z')
  {
      c = ch + 32;
      printf(" %c ",c);
  }
else if(ch >= 'a' && ch <= 'z')
  {
      c = ch - 32;
      printf(" %c ",c);
  }
  else
  {
    printf("  %c ",ch);
  } 

}

int main()
{
    char cValue = '\0';

    printf(" Enter character : ");
    scanf("%c",&cValue);

    Display(cValue);
 
 return 0;
}