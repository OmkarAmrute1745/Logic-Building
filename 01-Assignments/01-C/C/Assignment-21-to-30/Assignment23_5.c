/*
 Q - 
    Accept division of student from user and deends on the division display exam timing
    there are 4 divisions in school as A , B , C ,D  Exam of division A t 7 Am ,B at 8.30 Am
    C at 9.20 and D  at 10.30 Am
    

    Input   : C
    Output  : Your Exam at 9.20 AM

    Input  : d
    Output : Your Exam at 10.30 AM 


*/

#include<stdio.h>

void DisplaySchedular(char chDiv)
  {      
      if(chDiv == 'A' ||chDiv ==  'a')
      {      
        printf("Your Exam at 7.00 AM");      
      }
      if (chDiv == 'B' ||chDiv == 'b')
      {      
        printf("Your Exam at 8.30 AM");      
      }
      if (chDiv == 'C' || chDiv ==  'c')
      {      
        printf("Your Exam at 9.20 AM");      
      }
       if (chDiv == 'D' || chDiv ==  'd')
      {      
        printf("Your Exam at 10.30 AM");      
      }
   
}

int main()
{
    char cValue = '\0';

    printf("Enter your Division : ");
    scanf("%c",&cValue);

    DisplaySchedular(cValue);

    return 0;
}