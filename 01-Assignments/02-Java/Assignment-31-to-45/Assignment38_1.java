/*
 *  Q - Write a java Program which accept String from user and Display below Pattern
 * 
 *  Input : 
 *      Hello
 *  Output : 
 *        H e l l o
 *        H e l l o
 *        H e l l o
 *        H e l l o
 *        H e l l o
 * 
 */

import java.util.Scanner;

class Pattern
{
    public void Display(String str)
    {
       
        for(int i = 0; i < str.length(); i++)
        {
           for(int j = 0 ; j < str.length(); j++)
           {
             System.out.print(str.charAt(j) + "\t");
           }       
           System.out.println();
        }
    }
}


public class Assignment38_1 
{
   public static void main(String ar[])
   {
      Scanner sobj = new Scanner(System.in);
      
      System.out.println("Enter String : ");
      String str = sobj.nextLine();

      Pattern pobj = new Pattern();
      pobj.Display(str); 
   } 
}
