/*
 * Q - Write a java program which accept number of rows and number of columns from user
 *      and Display below pattern
 * 
 * Input  : iRow : 3  iCol = 5
 * 
 *    5 4 3 2 1
 *    5 4 3 2 1
 *    5 4 3 2 1
 * 
 */


 import java.util.Scanner;

 class Pattern
 {
    public void Display(int iRow , int iCol)
    {   
        for(int i = 1 ; i <= iRow ; i++ )
        {      
           for(int j = iCol ; j >= 1 ; j--)
           {
             System.out.print( j + "\t");
           }
            System.out.println();
        }
    }
}

public class Assignment37_3
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
