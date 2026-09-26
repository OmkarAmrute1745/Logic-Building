// 1
// Accept file name from user and open it Progamitacally
// 2. open 

#include<stdio.h>
#include<fcntl.h>   // File 
// Marcros (#defined)
// O_RDONLY - open for reading
// O_WRONLY - open for writing
// O_RDWR   - open for reading writing

int main()
{
   char Fname[20];
   int fd = 0;

   printf("Enter the file name that you want to create : ");
   scanf("%s",Fname);

     fd = open(Fname,O_RDWR); 

    if(fd == -1)
    {
        printf("Unable to Open file \n");
    }
    else
    {
        printf("File is Successfully Open with FD : %d \n",fd);
    }

    return 0;
}