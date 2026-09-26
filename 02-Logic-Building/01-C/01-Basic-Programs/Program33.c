// Factors Additions  10 -> 1 2 5 -->> 8

#include<stdio.h>
// O(N/2)   time complexcity
int SumFactors(int iNo)
{

  int iCnt = 0;
  int iSum = 0;

  for(iCnt = 1; iCnt <= (iNo/2); iCnt++)  // reduce time complaxity
  {
      if((iNo % iCnt ) == 0)
      {
         iSum = iSum+iCnt;
      }

  }
     return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
   printf("Summation of factors : %d " , iRet);
   
    return 0;
}