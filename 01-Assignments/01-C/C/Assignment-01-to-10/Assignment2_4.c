/*  
 Assignment2_4

Q - Accept a number from user and Display first number in second number of times
    input  : 12  5
    output : 12 12 12 12 12
Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

   Start 
        Accept 2 number from user
        and Display first number
        in second number of times
        
   End
*/

#include<stdio.h>

///////////////////////////////////////////
//  Function Name : Display
//  Description   : Display Number of times number  
//  Input :   Acccept 2 Nos like 2  5
//  Output :  Display   5 times      2 2 2 2 2 
//  Author :  Omkar(1745)
//  Date   :  18-10-2022
///////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int i = 0;

    for( i = 0 ; i<iFrequency; i++ )
    {
        printf("value : %d \n", iNo);
    }

}
int main()
{
  int iValue = 0;
  int iCount = 0;

  printf("Enter Number : ");
  scanf("%d",& iValue);

  printf("Enter Frequency : ");
  scanf("%d",&iCount);
  
  Display(iValue,iCount);

    return 0;
}

/*
input  : 12  5
    output : 12 12 12 12 12
*/