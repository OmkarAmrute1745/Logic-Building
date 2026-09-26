/*
 Q - Accept number of rows and number of colmns from user and display below pattern

    Input  : iRow = 3 iCol = 5
    Output :  A   A  A   A   A
              B   B  B   B   B
              C   C  C   C   C
             
*/

#include<stdio.h>

void Pattren(int iRow , int iCol)
{
    int i , j;
    char ch1 = 'A';
  for( i = 1 ; i <= iRow; i++)
  {   
     for(j = 1 ; j <=iCol ; j++)
     {
          printf("%c\t" , ch1);
         
     }
     printf("\n");
     ch1++;
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