/*
 Q -  Accept number from user and display below Pattern
   Input  :  5
   Output :  1 * 2 * 3 * 4 * 5 * 
*/

#include<stdio.h>
void Pattern(int iNo)
{
     if(iNo < 0)
     {
        iNo = -iNo;
     }
     
    for( int i = 1 ; i <= iNo ; i++)
    {
         printf(" %d ",i);
         printf(" * ");
    }
}

int main()
{
   int iValue = 0;

   printf("Enter Number of Elements : ");
   scanf("%d" , &iValue);
    
    Pattern(iValue);

    return 0; 
}