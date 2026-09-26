/*
 * Q - Write a java program which accept string from user and display below pattern
 * 
 * Input  : Hello
 * 
 * Output : 
 *  
 *     H  e  l  l  o
 *     H  e  l  l  *
 *     H  e  l  *  *
 *     H  e  *  *  *
 *     H  *  *  *  * 
 * 
 */

import java.util.Scanner;

class Pattern
{
    public void Display(String str)
    {
       for(int i = 0 ; i < str.length(); i++)
        {
           for(int j = 0 ; j < str.length() ; j++)
           { 
              if(i<j)
              {
                System.out.print("*" + "\t");
              }
              else
              {
                System.out.print(str.charAt(j) + "\t");
              }
           }
           System.out.println();
        }   
    }
} 

public class Assignment39_2 
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter String : ");
      String str = sobj.nextLine();
     
      Pattern pobj = new Pattern();
      pobj.Display(str);
   }    
}
