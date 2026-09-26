/*  

Q - write a program which accept number from user and print even factors of that number
     Input  : 24
     Output : 1  2  4  6  8  12

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

   Start 
        Accept a one number from user 
        write one function Display Even Factors 
        print even factos on screen
   End
*/

#include<stdio.h>

void DisplayFactors(int iNo)
{
   int i = 0;
    if(iNo <= 0)
    {
        iNo =- iNo;
    }

    for (i = 1; i<= iNo/2; i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("%d \n",i);
        }
    }

}

int main()
{
   int iValue = 0;
   
   printf("Enter Number :");
   scanf("%d",&iValue);
  
   DisplayFactors(iValue);

    return 0;
}

/*
Enter Number :24 
2
4
6
8
12

*/