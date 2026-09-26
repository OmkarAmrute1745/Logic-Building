// Display Letter by letter 
  /*
o 
lo 
llo
ello
  */
#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {    
         Display(++str);
        printf("%s \n", str);
    }
}

int main()
{
   char Arr[20];

  printf("\n Enter String : ");
  scanf("%[^'\n']s",Arr);
   
   Display(Arr);

    return 0;
}
