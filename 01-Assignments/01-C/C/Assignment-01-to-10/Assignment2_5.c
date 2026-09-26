/*  
 Assignment2_5

Q - Accept number from user and check whether number is even or odd
 

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

   Start 
        Accept number from user
        write one functio that return 
         if no is even 
             then return true
         otherwise
            return false
         Display Even or odd            
   End
*/

#include<stdio.h>
# define TRUE 1
# define FALSE 0
typedef int BOOL;


///////////////////////////////////////////
//  Function Name : ChkEven
//  Description   : Check number is even or odd 
//  Input :   10
//  Output :  No is Even 
//  Author :  Omkar(1745)
//  Date   :  18-10-2022
///////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if (iNo % 2 == 0)
     {
        return TRUE;
     }
     else
     {
        return FALSE;
     }
}


int main()
{

  int iValue = 0;
  BOOL bRet = FALSE;

  printf("Enter number : ");
  scanf("%d",&iValue);

  bRet = ChkEven(iValue);

  if(bRet == TRUE)
  {
     printf("Number Is Even \n");
  }
  else
  {
      printf("Number is Odd");
  }

   return 0;
}

/*
Enter number : 10
Number Is Even
*/