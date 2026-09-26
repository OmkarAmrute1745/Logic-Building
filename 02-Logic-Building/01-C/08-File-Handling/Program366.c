// Display Letter by letter

#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        printf("%c \n",*str);
        str++;
        Display(str);
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
