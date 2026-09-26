 

/*
  # How to Design Loop
 1. write the common statments in the block
 2. Check whether the number of iterations are already known or not
 3. if the iteratins count is fixedthen go for loop
 4. if iteration count is not fixed then go for while  

*/

#include<stdio.h>

void Display()
{
   int iCnt = 0;
   for(iCnt = 1; iCnt <= 5 ; iCnt++)
   {
     printf("Jay Ganesh ...\n");
   }
}

int main()
{
   Display();

   return 0;
}