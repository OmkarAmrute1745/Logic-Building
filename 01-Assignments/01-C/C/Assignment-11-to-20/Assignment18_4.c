/*
 Q -  Accept number from user and display below Pattern
   Input  :  5
   Output :  #  1  *  #  2  *  #  3  * #  4  *     
*/

#include<stdio.h>
void Pattern(int iNo)
{
     if(iNo < 0)
     {
        iNo = -iNo;
     }
     
    printf(" # ");
    for( int i = 1 ; i <= iNo ; i++)
    {
         printf(" %d ",i);
         printf(" *  #  ");
    }
    printf(" * ");
}

int main()
{
   int iValue = 0;

   printf("Enter Number of Elements : ");
   scanf("%d" , &iValue);
    
    Pattern(iValue);

    return 0; 
}