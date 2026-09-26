/*
 Q - Write a program which accept number from user and print numbers till that numbers
  
   Input : 8
   Output : 1  2  3  4  5  6  7  8
*/

#include<stdio.h>

void Display(int iNo)
{
   for(int i = 1 ; i<= iNo; i++ )
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