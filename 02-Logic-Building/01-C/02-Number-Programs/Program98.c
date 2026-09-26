/*
  8. Pattern Printing 
    
     Input : 4
     Output : a  b  c  d
*/
// ASCII (American Standard Code for Information Interchange)

// A -> 65  // Dont Use Ascii value in program
// a -> 97 


#include<stdio.h>

void Display(int iNo)
{
    char ch = 'a';

    if(iNo < 0)
    {
        iNo = -iNo;
    } 

   for(int iCnt = 1; iCnt <= iNo ; iCnt++,ch++) // ****
   {
      printf("%c\t",ch);    
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
 