// accept input on command line argument

#include<stdio.h>
     // Argument count // character array (argv argument vector)
int main(int argc, char *argv[])
{

    printf("Number of argumnets are : %d\n",argc);

    printf("Name of executable is : %s\n",argv[0]);
    
    return 0;
}