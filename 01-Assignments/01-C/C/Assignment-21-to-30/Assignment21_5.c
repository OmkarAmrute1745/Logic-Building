/*
 Q - Accept number of rows and number of colmns from user and display below pattern

    Input  : iRow = 4  iCol = 4
    Output : 
         1       2       3       4
         2       3       4       5
         3       4       5       6
         4       5       6       7
*/

#include<stdio.h>

void Pattren(int iRow , int iCol)
{
    int i , j;
    int iNo = 0;
  for( i = 1 ; i <= iRow; i++)
  {    
      iNo = i; 
     for(j = 1 ; j <= iCol ; j++)
     {   
        if((i % 2) == 0)
         {  
           printf("%d\t", iNo);
           iNo++;
         }
         else
         {
           printf("%d\t",iNo);
           iNo++;
         }
         
     }
     printf("\n");
    
  }

}

int main()
{
  int iValue1 = 0 ;
  int iValue2 = 0;

   printf("Enter Number of Rows : ");
   scanf("%d",&iValue1);

   printf("Enter Number of Columns : ");
   scanf("%d",&iValue2);

   Pattren(iValue1,iValue2);

    return 0;
}