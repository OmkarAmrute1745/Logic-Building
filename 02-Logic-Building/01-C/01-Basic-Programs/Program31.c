// Factors of no  10  -> 1,2,5,  10

#include<stdio.h>
 // O(N)    big O notation
void DisplayFactors(int iNo)
{

  int iCnt = 0;
  
  printf("Factors are : \n");

  for(iCnt = 1; iCnt < iNo; iCnt++)
  {
      if((iNo % iCnt ) == 0)
      {
        printf("%d \n",iCnt);
      }

  }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}