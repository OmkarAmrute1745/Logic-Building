/* 

  Q - Accept character from user if it is capital then  display all the character from the input 
    character till Z if input character is small then print alll the characters in reverse order 
      till a in other case return directly
  Input  : Q
  Output :  Q R S T U V W X Y Z
 
  Input  : m
  Output :  m l k j i h g f e d c b a

  Input  : 8
  Output : 8

  Input  : %
  Output : %   

*/

#include<stdio.h>

void Display(char ch)
{ 
    
  if(ch >= 'A' && ch <= 'Z')
  {
      for (int i = ch; i < 'Z' ; i++ )
      {      
         printf(" %c ",i);
      }
  }
  else if(ch >= 'a' && ch <= 'z')
  {
      for (int i = ch; i >= 'a' ; i-- )
      {      
         printf(" %c ",i);
      }
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