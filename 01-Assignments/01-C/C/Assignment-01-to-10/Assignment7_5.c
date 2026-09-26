/*
 Q - Write a program which accepts N and Print first 5 Multiples of N
      
      Input  : 4
      Output : 4  8  12  16  20

*/

#include<stdio.h>

void  MultipleDisplay(int iNo)
{
  int iM = 1;
  for(int i = 1; i<= 5 ; i++)
  {
       iM =  iNo * i ;
       printf("%d\t",iM);
  }
}

int main()
{
   int iValue = 0;
   
   printf("Enter Number : ");
   scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0;    
}