/*  
 Assignment1_2

Q -   program to print 5 times "Marvellous" on screen
        output : Marvellous
                 Marvellous
                 Marvellous
                 Marvellous
                 Marvellous

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

 Start 
     write Display function to display marvellous
     use loop 
     display Marvellous 
 End

*/

#include<stdio.h>

///////////////////////////////////////////
//  Function Name : Display 
//  Description   : Display 5 times on screen
//  Input  :      No input
//  Output :      Marvellous 5 times
//  Author :  Omkar(1745)
//  Date   :   18-10-2022
///////////////////////////////////////////
void Display()
{
    int i = 0;
        // 1     2    3
    for( i = 1; i<=5; i++)     
    {
        printf("Marvellous \n");   // 4
    } 
}

//Entry point function
int main()
{
     Display();  // Call display Function

    return 0;  // return to os successfully run
}


/////////////////////////
// Output :
//     Marvellous 
//     Marvellous
//     Marvellous
//     Marvellous
//     Marvellous
////////////////////////