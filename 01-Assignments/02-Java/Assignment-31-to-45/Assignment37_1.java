/*
 * Q - Write a java program which accept number of rows and number of columns from user
 *      and Display below pattern
 * 
 * Input  : iRow : 4  iCol = 3
 * 
 *    *  *  *
 *    *  *  *
 *    *  *  *
 *    *  *  *
 * 
 * 
 */

 import java.util.Scanner;

 class Pattern
 {
    public void Display(int iRow , int iCol)
    {   
        for(int i = 0 ; i < iRow ; i++ )
        {      
           for(int j = 0 ; j < iCol ; j++)
           {
             System.out.print(" * ");
           }
            System.out.println();
        }
    }
}

public class Assignment37_1
{
  public static void main(String arg[])
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
