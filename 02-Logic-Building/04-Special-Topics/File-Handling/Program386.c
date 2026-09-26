// Accept file name and open it write on that file that user want


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>  


int main()
{
   char Fname[20];
   int fd = 0,Length = 0;
   char Data[100];

   printf("Enter the file name that you want to create : ");
   scanf("%s",Fname);

     fd = open(Fname,O_RDWR); 

    if(fd == -1)
    {
       return -1;
    }
    printf("Enter the data that you want to write in the file :  \n");
    scanf(" %[^'\n']s",Data);

    Length = strlen(Data);
    // write(Kashat , Kay , kiti );
    write(fd,Data,Length);

    return 0;
}