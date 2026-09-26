// !=0  Change
#include<stdio.h>

 int DivisiableByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if(iAns != 0)
    {
        return 1;
    }
    else
    {
       return 0;   
    }
}
// ****************************
// Entry point function
int main()
{
    int iValue = 0;
    int iRet = 0;

     printf("Enter Number  : \n");
     scanf("%d", & iValue);
   
    iRet = DivisiableByFive(iValue);
    if(iRet != 0)
    {
        printf("%d is not divisiable by 5 \n",iValue);
    }
    else
    {
        printf("%d is Divisiable by 5 \n",iValue);
    }
   
    return 0;
}
