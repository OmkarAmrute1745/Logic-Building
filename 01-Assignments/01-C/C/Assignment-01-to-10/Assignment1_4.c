/*  
 Assignment1_4

Q -  Accept one numberand check whether is divisiable 5 or not

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

   Start 
        Accept number from user as No
        Divide that No by 5 and Check the value of reminder
        if the value is 0
            then display as No is Not Divisiable by 5
        otherwise
            Display as No is not divisaible by 5     
   End
*/

#include<stdio.h>
typedef int BOOL;  // Bool reolace int
#define TRUE 1     // TRUE replace 1
#define FALSE 0    // FALSE replace 0

///////////////////////////////////////////
//  Function Name : DivisiableByFive 
//  Description   : To check Whether input is divisiable by 5 or not
//  Input : 25
//  Output : 25 is Divisiable by 5
//  Author :  Omkar(1745)
//  Date   :  18-10-2022
///////////////////////////////////////////
 
 BOOL Check(int iNo)   
 {
    if((iNo % 5 ) == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
 }


// Entry point function
  int main()
{ 
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",& iValue);
    
    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisiable by 5");
    }
    else
    {
        printf("Not Divisiable by 5");
    }

    return 0;   // return 0 to os success
}


/* 
   Input : 25
   Output : 25 is Divisiable by 5
*/