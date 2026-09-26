/*  

Q - Accept a character from user and convert case of that character
     Input  :  a   Output : A
     Input  :  D   Output : D

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

   Start 
        Accept a character from user
        and convert that character
        if character is lower case then
               convert if Upper case
        if character is upper case
              Convert it lower case
                     
   End
*/

#include<stdio.h>

void DisplayConvert(char cValue)
{
    char ch = '\0';
     if( cValue  <= 'A')
     {
         ch = cValue + 32;
            printf("%c",ch); 
     }
     else if(cValue >= 'a')
     {
        ch = cValue - 32;
         printf("%c",ch); 
     }
}

int main()
{

   char cValue = '\0';
   printf("Enter Character ");
   scanf("%c", &cValue);

   DisplayConvert(cValue);


    return 0;
}

// 65  90   Uppercase  65+32
// 97  122  Lowercase  97-32

// 65   97   A  a   
// 66   98   B  b   


/*
 Input  :  a   Output : A
 Input  :  D   Output : D


*/