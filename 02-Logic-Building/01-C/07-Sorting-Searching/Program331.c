// Check whether 4th bit is on or off
// (right to Left check)

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT iMask = 8;
    UINT Result = 0;
    
    Result = No & iMask;

     if(Result == iMask)
     {
        return true;
     }
     else
     {
        return false;
     }
}

int main()
{
    UINT Value = 0;
    in  t bRet = false;
    
    printf("Enter Number : \n");
    scanf("%d",&Value);
    
    bRet = CheckBit(Value);
    if(bRet == true)
    {
        printf("4th bit is on \n");
    }
    else
    {
        printf("4th bit is Off \n");
    }

    return 0;
}