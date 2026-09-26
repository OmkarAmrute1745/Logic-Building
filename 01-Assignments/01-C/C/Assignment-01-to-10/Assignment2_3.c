/*  
 Assignment2_3

Q - Accept a number from user if number is less than 10 then print "Hello" Otherwise print "Demo" 

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

   Start 
        Accept number from user
        check that no is less than 10
         if less then 10
              print on screen "Hello"
          therwise
                print " Demo"     
   End
*/

#include<stdio.h>


///////////////////////////////////////////
//  Function Name : Display
//  Description   : if less then 10
//                    print on screen "Hello"
//                  otherwise
//                      print " Demo"  
//  Input :   11
//  Output :  Demo
//  Author :  Omkar(1745)
//  Date   :  18-10-2022
///////////////////////////////////////////
void Display(int iNo)
{
   if(iNo < 10)
   {
    printf("Hello");
   }
   else
   {
     printf("Demo");
   }
     
}

int main()
{
    
    int iValue = 0;
    
    printf("Enter Number :");
    scanf("%d" , & iValue);
   
     Display(iValue);
    
    return 0;
}
/*
  Enter Number :9
  Hello
 
   Enter Number :11 
   Demo

*/