// Accept number from user summation of digits
// Another way
#include<Stdio.h>

int SumDigits(int iNo)
{
  int iSum = 0;

if (iNo < 0)  // Updater
 {
    iNo = -iNo;
 }
while(iNo != 0) 
   {
      iSum = iSum + ( iNo % 10); // ******
      iNo /= 10;   // *****
   }
  return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Number of digits are : %d \n ",iRet);

    return 0;
}
