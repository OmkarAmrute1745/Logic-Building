/*
  Q - write a program which accept number from user and print that numbers of $ & * on screen

  Input  : 5
  Output : $  *  $ *   $  *  $ *   $  *  

  Input  : 3
  Output :  $  *  $ *   $  *  

  Input  : -3
  Output : $  *  $ *   $  *  
*/

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
   for(int i = 0; i < iNo ; i++)
   {
     printf(" $ * ");
   }  
}

int main()
{
   int iVlaue = 0;

   printf("Enter number : ");
   scanf("%d",&iVlaue);

   Pattern(iVlaue);

    return 0;
}