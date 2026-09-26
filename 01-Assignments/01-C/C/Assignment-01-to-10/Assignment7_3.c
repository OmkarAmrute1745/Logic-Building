/*
 Q - Write a program which accept number from user and print numbers of lines
    
   Input : 4
   Output : -4 -3 -2  -1  0  1  2  3  4
*/

#include<stdio.h>

void Display(int iNo)
{
   for(int i = -iNo ; i<= iNo; i++ )
   {
    printf("%d \t",i);
   }   
}

int main()
{
  
  int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);
     
     Display(iValue);

    return 0;
}