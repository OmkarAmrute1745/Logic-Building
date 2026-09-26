// File Manipulation
// create 1 

#include<stdio.h>
//#include<stdlib.h>
  // file control.h
#include<fcntl.h>   // File 

int main()
{
   char Fname[20];
   int fd = 0;

   printf("Enter the file name that you want to create : ");
   scanf("%s",Fname);
           // filename // 0 octal // 
   fd = creat(Fname,0777); // 4+2+1 = 7 + 7 + 7
  // fd - File Descriptor
    if(fd == -1)
    {
        printf("Unable to create file \n");
    }
    else
    {
        printf("File is Successfully created with FD : %d",fd);
    }

    return 0;
}