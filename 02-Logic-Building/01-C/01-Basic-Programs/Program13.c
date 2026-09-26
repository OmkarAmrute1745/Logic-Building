// No is Divisiable by 3 & 5 

#include<stdio.h>
#include<stdbool.h>

bool DivisiableByThreeAndFive(int iNo)
{
    if(iNo % 3 == 0)
    {
        if(iNo % 5 == 0)
        {
           return true;
        }
        else
        {
            return false;
        }
    }
    else
     {
        return false;
     }
}

int main()
{
   int iValue = 0;
   bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    bRet = DivisiableByThreeAndFive(iValue);
     if(bRet == true)
     {
        printf("Number is Divisible by 3 and 5 \n");
     }
     else
     {
        printf("Number is not divisibale by 3 or 5 \n");
     }
    
    return 0;
}
