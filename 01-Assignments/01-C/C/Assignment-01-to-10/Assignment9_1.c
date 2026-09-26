/*
 Q - Write a Program which accpet number from user and Display below pattern 
   Input  :  5
   Output : *  *  *  *  *  #  #  #  #  #
   
   Input  : -2 
   Output : *  *  #  #
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
   for (int i = 1 ; i <= iNo ; i++ )
   {
      printf("*\t");
   }

   for (int i = 1 ; i <= iNo ; i++ )
   {
      printf("#\t");
   }
   

}

int main()
{
  int iValue = 0 ;
    
    printf("Enter Number : ");
    scanf("%d",& iValue);

    Display(iValue);

    return 0;
}