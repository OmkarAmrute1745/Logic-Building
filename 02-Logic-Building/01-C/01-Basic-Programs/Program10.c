// use true false instate of 1 0

#include<stdio.h>
#include<stdbool.h>   // Boolean datatype
bool DivisiableByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if(iAns == 0)
    {
        return  true;
    }
    else
    {
       return false;   
    }
}

// ***********************

// Entry point function
int main()
{
    int iValue = 0;
    bool bRet = 0;

     printf("Enter Number  : \n");
     scanf("%d", & iValue);
   
    bRet = DivisiableByFive(iValue);
    if(bRet == false)
    {
        printf("%d is not divisiable by 5 \n",iValue);
    }
    else
    {
        printf("%d is Divisiable by 5 \n",iValue);
    }
   
    return 0;
}
