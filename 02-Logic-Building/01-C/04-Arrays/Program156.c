//2
 // strcpyX
// Copy String one to another

#include<stdio.h>
void StrcpyX(char *src,char *dest)
{
   
   while(*src != '\0')
   {
     *dest = * src;
      
      src++;
      dest++;
   }
    *dest = *src; // ****
}

int main()
{
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};

    printf("Enter String \n");
    scanf("%[^'\n']s",Arr);

    StrcpyX(Arr,Brr); // strcpyX(100,200);

    printf("Copied String is : %s \n",Brr);

    return 0;
}
