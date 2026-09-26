/*
 Q - Accept number of rows and number of colmns from user and display below pattern

    Input  : iRow = 3   iCol = 4
    Output :1       2       3       4 
            5       6       7       8
            9       10      11      12
*/

#include<stdio.h>

void Pattren(int iRow , int iCol)
{
    int i , j;
     int iCnt = 1;
  for( i = 1 ; i <= iRow; i++)
  {   
     for(j = 1 ; j <= iCol ; j++)
     {
          printf("%d\t" , iCnt);
          iCnt++;
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