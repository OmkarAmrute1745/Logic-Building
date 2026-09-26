/* Accept Number from user and Count Even numbers
 4762   2
 406    3

*/

#include<Stdio.h>

int  CountEvenDigits(int iNo)
{
  int iEvenCnt = 0;
  int iDigit = 0;
  if(iNo == 0)  // filter
  {
    return 1;
  }

while(iNo != 0) 
   {
     iDigit = iNo % 10;
    if(( iDigit % 2 ) == 0)
    {
       iEvenCnt++;
    }
    iNo = iNo / 10;
    }
  return iEvenCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Number of Even digits are : %d \n ",iRet);

    return 0;
}
