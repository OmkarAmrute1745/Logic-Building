 /*
* Q - Write a program which accept number from user and return the Multiplication of all digits
* Input  : 2395
* Output : 270
* 
* Input  : 1018
* Output : 8
* 
* Input  : 9440
* Output : 144
* 
* Input  : 922432
* Output : 864
* 
*/


import java.util.Scanner;

class Digit
{
    public int Multiply(int iNo)
    {
      int iMult = 1;
      int iDigit = 0;
    
      while(iNo != 0)
       {
         iDigit = iNo % 10;
         if(iDigit == 0)
         {
            iDigit = 1;
         }
         iMult = iMult * iDigit;
         iNo = iNo / 10;
       }
      return iMult;
    }
}

public class Assignment33_4
{
  public static void main(String arg[])
  {
      Scanner sobj = new Scanner(System.in);
      
      System.out.println("Enter No : ");
      int iNo = sobj.nextInt();

      Digit nobj = new Digit();
      int iRet =  nobj.Multiply(iNo);
       
      System.out.println("Multiplication is : " + iRet);

  }    
}
