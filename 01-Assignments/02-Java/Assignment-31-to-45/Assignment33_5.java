 /*
* Q - Write a program which accept number from user and return the difference between 
      summation of even and summation od odd digit 
* Input  : 2395
* Output : -15 (2 - 17)
* 
* Input  : 1018
* Output : 6  (8 - 2)
* 
* Input  : 8440
* Output : 16  (8 - 2)
* 
* Input  : 5733
* Output : -18 (0 - 18)
* 
*/


import java.util.Scanner;

class Digit
{
    public int CountDiff(int iNo)
    {
      int iEvenSum = 0;
      int iOddSum = 0;
      int iDigit = 0;
    
      while(iNo != 0)
       {
         iDigit = iNo % 10;
         if(iDigit % 2 == 0)
         {
            iEvenSum = iEvenSum + iDigit;
         }
         else
         {
            iOddSum  =  iOddSum + iDigit; 
         }
         iNo = iNo / 10;
       }
      return iEvenSum - iOddSum;
    }
}

public class Assignment33_5
{
  public static void main(String arg[])
  {
      Scanner sobj = new Scanner(System.in);
      
      System.out.println("Enter No : ");
      int iNo = sobj.nextInt();

      Digit nobj = new Digit();
      int iRet =  nobj.CountDiff(iNo);
       
      System.out.println("Diff is : " + iRet);

  }    
}
