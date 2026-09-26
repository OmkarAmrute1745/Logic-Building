/*
 * Q - Write a java program which accept number from user and return count of even digits
 * Input  :  2395
 * Output : 1
 * 
 * Input  : 1018
 * Output : 2
 * 
 * Input  : -1018
 * Output : 2
 * 
 * Input  : 8462
 * Output : 4  
 * 
 */



import java.util.Scanner;

 class Digit
 {
     public int CountEven(int iNo)
     {
       int iCnt = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
          iDigit = iNo % 10;
          
          if(iDigit % 2 == 0)
          {
            iCnt++;
          }
          iNo = iNo / 10;
        }
       return iCnt;
     }
 }

public class Assignment33_1
{
   public static void main(String arg[])
   {
       Scanner sobj = new Scanner(System.in);
       
       System.out.println("Enter No : ");
       int iNo = sobj.nextInt();

       Digit nobj = new Digit();
       int iRet =  nobj.CountEven(iNo);
        
       System.out.println("Count of Even Nos : " + iRet);

   }    
}
