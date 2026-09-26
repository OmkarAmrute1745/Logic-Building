/*
  9. Pattern Printing 
    
     Input :  
         Row 4 
         Col 4
    
   Output :        COL
              0   1  2  3
            0  *  *  *  *  
            1  *  *  *  *   ROW
            2  *  *  *  *
            3  *  *  *  *  
*/
// 2 used Updater 
// N^2 (N Squre )

#include<stdio.h>

void Display(int iRow , int iCol)
{
  int i = 0 , j = 0;
  
  if(iRow < 0)   // Updater
  {
    iRow = -iRow;
  }
  if(iCol < 0)  // Updater
  {
     iCol  = -iCol;
  }

   for(i = 1; i <= iRow ; i++) 
   {
       for(j = 1; j <= iCol ; j++)
      {
         printf(" * "); 
      }     
       printf(" \n");
   }
}

int main()
{
   int iValue1 = 0;
   int iValue2 = 0;

   printf("Enter Number of Rows  : ");
   scanf("%d",&iValue1);

   printf("Enter Number of Columns  : ");
   scanf("%d",&iValue2);
  
     Display(iValue1,iValue2);
 
    return 0;
}
 