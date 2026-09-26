  // Read data from file
  // Display garbage

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>  


int main()
{
   char Fname[20];
   int fd = 0,Length = 0;
   char Data[100];

   printf("Enter the file name that you want to open : ");
   scanf("%s",Fname);
                
    fd = open(Fname,O_RDWR); 

    if(fd == -1)
    {
       return -1;
    }
  
   // read(Khutun,Kashat,Kiti);
   read(fd,Data,13);

   printf("Data From file is : %s ", Data);

    return 0;
}