/*  
 Assignment2_1

Q - Accept one number from user and print thatnumber of * on screen

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

   Start 
        Accept number from user as No
        diaplay number of *
   End
*/

#include<stdio.h>

///////////////////////////////////////////
//  Function Name : Accept
//  Description   : Accept No and prints *
//  Input :   7
//  Output :  * * * * * * *
//  Author :  Omkar(1745)
//  Date   :  18-10-2022
///////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for( iCnt = 0 ; iCnt< iNo ; iCnt++)
    {
        printf("* \t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);
     
     Display(iValue);
    return 0;
}

/*
 Input :   7
 Output :  * * * * * * *
*/