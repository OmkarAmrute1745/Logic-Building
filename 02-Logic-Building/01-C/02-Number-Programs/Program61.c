/*
 Accept number from user and check whether number is palindrom or not

 Input  : 121
 Output : 121  Palindrom number 

*/
//  return (iRev == iTemp); 
// Seperete function CheckPallindrome

#include<stdio.h>
#include<stdbool.h>

int Reverse(int iNo)
{
    int iDigit = 0 , iRev = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while ( iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo /10;
    }
    return iRev;
}

bool CheckPllindrome(int iData)
{
    int iReverse = 0;
    iReverse = Reverse(iData);
    return (iReverse == iData);    
}

int main()
{
    int iValue = 0;
    bool bRet = false;
       
    printf("Please enter number : \n");
    scanf("%d",&iValue);

     bRet = CheckPllindrome(iValue);
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
