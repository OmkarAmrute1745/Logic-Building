/*
 * Q - Write a java program which accept number of rows and number of columns from user
 *      and Display below pattern
 * 
 * Input  : iRow : 3  iCol = 4
 * 
 * 1   2   3   4
 * 5   6   7   8
 * 9   10  11  12
 * 
 * 
 */

 import java.util.Scanner;

 class Pattern
 {
    public void Display(int iRow , int iCol)
    {   
         int iVal = 1;
        for(int i = 0 ; i < iRow ; i++ )
        {      
           for(int j = 0 ; j < iCol ; j++)
           {
             System.out.print(iVal + "\t");
              iVal++;
           }
            System.out.println();
        }
    }
}

public class Assignment36_5
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
