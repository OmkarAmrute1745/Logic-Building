
/*
 Q - Accept number of rows and number of colmns from user and display below pattern

    Input  : iRow = 5  iCol = 5
    Output : 
            1       2       3       4
            1       *       *       4
            1       *       *       4
            1       2       3       4
*/

#include<stdio.h>

void Pattren(int iRow , int iCol)
{
    int i , j;
  for( i = 1 ; i <= iRow; i++)
  {    
     for(j = 1 ; j <= iCol ; j++)
     {   
         if((j == 1 || j == iCol) || (i == 1 || i == iRow))
        {
          printf("%d\t",j);
        }
        else
        {
            printf("*\t");
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