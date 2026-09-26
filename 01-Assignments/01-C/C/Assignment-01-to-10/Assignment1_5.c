/*  
 Assignment1_4

Q - Accept one numberfrom user and print thatnumber of * on screen

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
//  Input :   5
//  Output :  * * * * *
//  Author :  Omkar(1745)
//  Date   :  18-10-2022
///////////////////////////////////////////

void Accept(int iNo)
{
  int iCnt = 0;
    for(int i = 0; i<iNo; i++)
    {
        printf("* \n");
    }
}

int main()
{
   int iValue = 0;
   iValue = 5;

  Accept(iValue);

    return 0;
}

/*
  Input  : 5 
  Output :       
           * 
           *
           * 
           * 
           * 
*/