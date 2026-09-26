/*  

Q - Write a program which accept one number from user and 
    print that number of even numbers on screen
   Input  : 7
   Output : 2  4  6  8  10  12  14 
 

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

   Start 
        Accept a one number from user 
        write one function PrintEven
        print that numbers of even on screen 
   End
*/

#include<stdio.h>

int PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return -1;
    }

  for(int i = 2; i <= iNo+iNo; i++) 
  {
     if (i % 2 == 0)
     {
         printf("%d \n",i);
     }

  }
}

int main()
{
    int iValue = 0;
    printf("Enter Number ");
    scanf("%d",& iValue);

    PrintEven(iValue);

    return 0;
}


/*
Enter Number 10
2
4
6
8
10
12
14
16
18
20
*/