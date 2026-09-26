/*
 Q -  Accept number from user and display below Pattern
   Input  :  5
   Output : A  B  C  D  E 
*/

#include<stdio.h>
void Pattern(int iNo)
{

     char ch = 'A';

     if(iNo < 0)
     {
        iNo = -iNo;
     }
     
    for( int i = 0; i < iNo; i++ )
    {
       printf("%c \t",ch);
       ch++;
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