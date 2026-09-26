/*  
 Assignment1_3

Q -   program to print 5 to 1 number on screen

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

 Start 
     write Display function to display 5 to 1
     use loop 
     display Loop
 End

*/

#include<stdio.h>

///////////////////////////////////////////
//  Function Name : Display 
//  Description   : Display 5 to 1 on screen
//  Input  :      No input
//  Output :      5  4  3  2  1 
//  Author :   Omkar(1745)
//  Date   :   18-10-2022
///////////////////////////////////////////

void Display()
{
    
   int i = 0;
       //  1      2      3
     for(i = 5 ; i > 0; i--)
     {
        printf("%d \n",i);  // 4
     }
}

// Entry point function
  int main()
{
   
   Display();   // Call Display Function

    return 0;   // return 0 to os success
}

/*
  Output:
            5 
            4 
            3 
            2 
            1 
*/