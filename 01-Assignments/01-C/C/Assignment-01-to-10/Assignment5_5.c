/*
 Write a Program which accept number from user and return difference between 
 Summation of all its factors and non factors 
 Input  :  12
 Output : -34    (16 - 50)

 Input  :  10
 Output : -29    (8 - 37)
*/

#include<stdio.h>

int SumFact(int iNo)
{
   int i = 0;
   int iSumNonFact = 0;
   int iSumFact = 0;

    for(int i = 1; i <=iNo; i++)
    {
        if(iNo % i == 0)
        {
            iSumFact = iSumFact + i;  
        }
        else
        {
            iSumNonFact = iSumNonFact + i ;   
        }
    }

    return  iSumNonFact - iSumFact ;
    
}

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number : ");
   scanf("%d",&iValue);

   iRet = SumFact(iValue);

   printf("%d\n",iRet); 

    return 0;
}

/*
Enter number : 12
22                  (28 - 50)
*/