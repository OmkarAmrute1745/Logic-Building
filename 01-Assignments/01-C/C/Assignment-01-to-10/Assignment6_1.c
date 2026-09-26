/*
 Q - Write a program which accept name from user and print that name 
     Input  : Piyush Khairnar
     Output : Piyush Khairnar
*/

#include<stdio.h>

int main()
{
   char cName[30];
   printf("Enter Full Name : ");
   scanf("%[^\n]s",&cName);        // ****

   printf("Your name is : %s  ",cName);
 
    return 0;
}

/*
Enter Full Name : Piyush Khairnar
Your name is : Piyush Khairnar  

Enter Full Name : Omkar Santosh  Amrute  
Your name is : Omkar Santosh  Amrute   
*/