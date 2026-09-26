/*  

Q - Accept a character from user and check whether that charactor
 is vowel (a,e,i,o,u) or not
   Input : E   Output : TRUE
   Input : d   Output : FALSE

Steps to follow while programming
Steps:
   1. Understand the problem statment
   2. Write the problem
   3. Decide the priogramming language
   4. write the program
   5. Test the program 

   Start 
      
                     
   End
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{

    if(cValue == 'a'|| cValue == 'e' ||cValue == 'i'|| cValue == 'o'||cValue == 'u'|| cValue == 'A'|| cValue == 'E' ||cValue == 'I'|| cValue == 'O'||cValue == 'U')
    {
       return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
     char cValue = '\0';
     BOOL bRet = FALSE;
   
    printf("Enter Character : ");
    scanf("%c",& cValue);

    bRet = ChkVowel(cValue);

  if(bRet == TRUE )
  {
     printf("It is Vowel");
  }
  else
   {
     printf("It is Not Vowel");
   }
    return 0;
}