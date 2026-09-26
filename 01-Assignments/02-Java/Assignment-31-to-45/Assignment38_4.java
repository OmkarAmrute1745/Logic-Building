/*
 *  Q - Write a java Program which accept String from user and Display below Pattern
 * 
 *  Input : 
 *      Hello
 *  Output : 
 *        H e l l o
 *        H e l l
 *        H e l 
 *        H e   
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
        int P = 0;
      
         for(int i = 0; i < 2 *str.length()+1; i++)
         {
            if(i < str.length())
            {
               P = i;
            }
            else
            {
               P = 2*str.length() - i;
            }

            for(int j = 0 ; j < P ; j++)
            {
              System.out.print(str.charAt(j) + "\t");
            }       
            System.out.println();
         }
     }
 }
 
 
 public class Assignment38_4
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
