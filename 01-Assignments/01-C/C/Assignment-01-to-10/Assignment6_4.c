/*
 Q - write a program which accept three numbers and print its multiplication
     
     Input  : 5  4  7
     Output : 140

     input  : 5  0  7
     Output : 35

     Input  : 5  0  0
     Output : 5

     input  : 0  0  0
     Output : 0 

*/

#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    
    if(iNo1 == 0)
    {
       iNo1 = 1;
    }
    
    if(iNo2 == 0)
    {
        iNo2 = 1;
    }
   
    if(iNo3 == 0)
    {
        iNo3 = 1;
    }
    return iNo1 * iNo2 * iNo3;
 }


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;


    printf("Enter Three Numbers : ");
    scanf("%d %d %d" ,&iValue1,&iValue2,&iValue3);
    

    iRet = Multiply(iValue1,iValue2,iValue3);
     printf("Multiplication is : %d ",iRet);

    return 0;
}