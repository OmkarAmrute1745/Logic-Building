// display 1 2 3 4 5

#include<stdio.h>

void Display(int iValue)
{
   int iCnt = 1; 
   while(iCnt<=iValue)
   {
      printf("Marvellous : %d \n",iCnt);
      iCnt++;
   }
}

int main()
{
    int iNo = 0;
    printf("Enter number of iterations : \n");
    scanf("%d" ,&iNo);

    Display(iNo);

   return 0;
}