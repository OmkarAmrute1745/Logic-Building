/*
 * Q - Write a java program which accept number of rows and number of columns from user
 *      and Display below pattern
 * 
 * Input  : iRow : 4  iCol = 3
 * 
 *  1 2 3
 *  1 2 3
 *  1 2 3
 *  1 2 3
 * 
 * 
 */


 import java.util.Scanner;

 class Pattern
 {
    public void Display(int iRow , int iCol)
    {   
        for(int i = 1 ; i <= iRow ; i++ )
        {      
           for(int j = 1 ; j <= iCol ; j++)
           {
             System.out.print( j + "\t");
           }
            System.out.println();
        }
    }
}

public class Assignment37_2
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
