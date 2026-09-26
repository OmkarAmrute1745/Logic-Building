/*
 Q - Write a program which display ASCII table table contains symbols 
 decimal ,Hexadecimal and octal representation of every member from  0 to 255

*/

void DisplayASCII()
{
    
    printf("_________________________________________________\n");
    printf("ASCII table\n");
    printf("_________________________________________________\n");
    
    printf("Charcter\t Decimal\t Hex \t Octal");
  for(int i = 0 ; i <= 255 ; i++)
  {
     printf("%c \t %d \t %x \t %o\n",i,i,i,i);    
  }
}

int main()
{
    DisplayASCII();
    return 0;
}