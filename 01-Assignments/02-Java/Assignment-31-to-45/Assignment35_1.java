/*
 * Q - Write a java program which accept 2 Strings from user and 
 *    concate N characters of second string after first String value of 
 *    N should accept from user 
 * 
 *  Note : if third Parameter is greter than Size of second sting then 
 *         concate whole string after First string
 * 
 * Input : "Marvellous Infosystems "
 *         "Logic Building"
 *         5
 * 
 * Output : "Marvellous Infosystems Logic"
 * 
 */

import java.util.Scanner;

class StringDemo
{
    public String StrNCatX(String src , String dest , int iCnt)
    {   
        int s = src.length();
        for(int i = 0 ; i < iCnt ; i++) 
        {
            
            src.charAt() = dest.charAt(i);         
        }  
        return src;
    }
}

public class Assignment35_1 
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);
       
      System.out.println("Enter First String : ");
      String str1 = sobj.nextLine();

      System.out.println("Enter Second String :  ");
      String str2 = sobj.nextLine();
      
     System.out.println("Enter No : ");
     int iNo = sobj.nextInt();

     StringDemo Strobj = new StringDemo();

     Strobj.StrNCatX(str1, str2, iNo);

   }    
}
