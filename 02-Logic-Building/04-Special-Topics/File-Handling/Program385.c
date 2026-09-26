
// 3. Write in file
// Accept file name and open it write on that file


#include<stdio.h>
#include<fcntl.h>  
// #include<unistd.h> // (on mac OS)

int main()
{
   char Fname[20];
   int fd = 0;
   char Data[] = "Marvellous";

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
        write(fd,Data,10);  // file descriptor , Data , size      
    }

    return 0;
}