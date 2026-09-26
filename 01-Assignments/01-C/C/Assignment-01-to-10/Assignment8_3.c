/*
  Q - Write a program to find factorial of given number

  Input  : 5
  Output : 120   (5 * 4 * 3 * 2 * 1)
  
  Input  : -5
  Output : 120 (5 * 4 * 3 * 2 * 1) 
  
  Input  : 4
  Output : 24  (4 * 3 * 2 * 1)
*/

#include<stdio.h>

int Factorial(int iNo)
{  
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    int Fact = 1;
    for(int i = 1 ; i<= iNo ; i++)
     {
        Fact = Fact * i; 
     }  

  return Fact;
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number : ");
   scanf("%d" , & iValue);

     iRet = Factorial(iValue);

     printf("Factorial of number is %d ", iRet);

    return 0;
}