/*
 Q - Accept number of rows and number of colmns from user and display below pattern

    Input  : iRow = 4 iCol = 4
    Output :   1  1  1  1
               2  2  2  2
               3  3  3  3
               4  4  4  4
             
*/

#include<stdio.h>

void Pattren(int iRow , int iCol)
{
    int i , j;
  for( i = 1 ; i <= iRow; i++)
  {
     for(j = 1 ; j <=iCol ; j++)
     {
        printf(" %d " , i);
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