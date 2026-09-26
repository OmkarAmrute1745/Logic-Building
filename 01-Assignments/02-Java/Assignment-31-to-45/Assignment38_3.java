/*
 *  Q - Write a java Program which accept String from user and Display below Pattern
 * 
 *  Input : 
 *      Hello
 *  Output : 
 *        H 
 *        H e 
 *        H e l 
 *        H e l l 
 *        H e l l o
 * 
 */

 import java.util.Scanner;

 class Pattern
 {
     public void Display(String str)
     {
         System.out.println("length : " + str.length());
         for(int i = 0; i < str.length(); i++)
         {
            for(int j = 0 ; j <i+1; j++)
            {
              System.out.print(str.charAt(j) + "\t");
            }       
            System.out.println();
         }
     }
 }
 
 
 public class Assignment38_3 
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
 