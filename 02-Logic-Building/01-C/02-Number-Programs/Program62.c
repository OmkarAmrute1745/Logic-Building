/*
 Accept number from user and check whether number is palindrom or not

 Input  : 121
 Output : 121  Palindrom number 

*/ 
// Program 59   -> using for loop



#include<stdio.h>
#include<stdbool.h>


bool CheckPalindrome(int iNo)
{
    int iDigit = 0 , iRev = 0;
    int iTemp = iNo;

    for ( ;iNo != 0; )   // *****
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo /10;
    }
    if(iRev == iTemp)
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
    int iValue = 0;
    bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d",&iValue);

     bRet = CheckPalindrome(iValue);
     if(bRet == true)
     {
       printf("%d : is  Palindrome number \n",iValue);
     }
     else
     {
        printf("%d : is Not Palindrome number \n",iValue);
     }
    return 0;
}
