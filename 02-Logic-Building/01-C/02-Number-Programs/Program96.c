 /*
  7. Pattern Printing 
    
     Input : 4
     Output : A  B  C  D
*/
// 1


#include<stdio.h>

void Display(int iNo)
{
    char ch = 'A';

    if(iNo < 0)
    {
        iNo = -iNo;
    } 

   for(int iCnt = 1; iCnt <= iNo ; iCnt++)
   {
      printf("%c\t",ch);
      ch++;     
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
 