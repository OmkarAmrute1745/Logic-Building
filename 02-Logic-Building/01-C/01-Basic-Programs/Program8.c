/* Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 
*/
/* 
 Problem Statment : 
    Accept a number from user and check it is divisiable by 5 or not
    Input : 23    Output : 23 is not Divisiable by 5
    Input : 20    Output : 20 is Divisiable by 5
////////////////////////////////////
//  Algorithm : 
///////////////////////////////////
  Start 
     Accept number from user as No
     Divide that No by 5 and Check the value of reminder
        if the value is 0
            then display as No is Not Divisiable by 5
        otherwise
            Display as No is not divisaible by 5     
   End
*/ 
////////////////////////////////////////////////////
#include<stdio.h>
///////////////////////////////////////////
//  Function Name : DivisiableByFive 
//  Description   : To check Whether input is divisiable by 5 or not
//  Input  :  
//  Output :
//  Author :  Om ()
//  Date   :  12-10-2022
///////////////////////////////////////////
int DivisiableByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5;

    if(iAns == 0)
    {
        return 1;
    }
    else
    {
       return 0;   
    }
}

// Entry point function
int main()
{
    int iValue = 0;
    int iRet = 0;

     printf("Enter Number  : \n");
     scanf("%d", & iValue);
   
    iRet = DivisiableByFive(iValue);
    if(iRet == 0)
    {
        printf("%d is not divisiable by 5 \n",iValue);
    }
    else
    {
        printf("%d is Divisiable by 5 \n",iValue);
    }
   
    return 0;
}

///////////////////////////////////////
// Result : 
//       Input : 25
//       Output : 25 is Divisiable by 5
///////////////////////////////////////
