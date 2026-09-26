/*  
 Assignment1_1

Q -   program to divide two numbers
      Input:  15  5    output : 3

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

 Start 
     take 2 Numbers as  Value1,Value2
     write function to divide two Numbers
     pass 2 numbers to function 
     return division 
     display division 
 End

*/

#include<stdio.h> 

///////////////////////////////////////////
//  Function Name : Divide
//  Description   : Division of two numbers
//  Input  :      15  5
//  Output :      3
//  Author :  Omkar(1745)
//  Date   :   18-10-2022
///////////////////////////////////////////

int Divide(int iNo1 ,int iNo2)
{
    int iAns = 0 ;     // to store division
      
      if(iNo2 == 0)    //  Filter  if user enter 0 
      {
         return -1;
      }
    
      iAns = iNo1 / iNo2;   
 
    return iAns;    // return Division to caller
}

// Entry Point function
int main()
{
    int iValue1 = 15,iValue2 = 5;    // Local Variables
    int iRet = 0;              // to store return value 

     iRet = Divide(iValue1,iValue2);   // Call divide function with 2 parameters
     printf("Division is %d :",iRet);   // Print Division

    return 0;   // Convey to operating systems Successfully execution
}




///////////////////////////////////////
// Result : 
//       Input : 15  5
//       Output : Division is 3
///////////////////////////////////////