/*
 * Q - Write a java program which accept  number of row and number of columns from user and display below pattern
 * 
 * Input  :  iRow = 4    iCol = 4
 * 
 * Output : 
 *  
 *        *  *  *  #
 *        *  *  #  *
 *        *  #  *  *
 *        #  *  *  * 
 *   
 * 
 */

import java.util.Scanner;

class Pattern
{
    public void Display(int iRow ,int iCol)
    {
       for(int i = 1 ; i <= iRow ; i++)
       {
         for(int j = 1 ; j<= iCol ; j++)
         {
           // if(i>j || i<j)
            {
                System.out.print("#" + "\t");
            }
            else
            {
                System.out.print("*" + "\t");
            }
         }
         System.out.println();
       }
    }
} 

public class Assignment40_1 
{
    public static void main(String ar[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Row : ");
      int iRow = sobj.nextInt();
      System.out.println("Enter Col : ");
      int iCol = sobj.nextInt();

      Pattern pobj = new Pattern();
      pobj.Display(iRow, iCol);
    }

}
