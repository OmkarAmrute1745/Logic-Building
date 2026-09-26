// Uncontrolled Recursion  // Segementation Fault

// iteration vs Recursion
// *  *  *  *

#include<stdio.h>

void DisplayI()
{
    int iCnt = 1; // auto 

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
}


void DisplayR()
{
    int iCnt = 1;   // No use static

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();   // Recursive call
    }
}

int main()
{
     DisplayR();
  
    return 0;
}