/*
 * Q - Write a java program which accept number of rows and number of columns from user
 *      and Display below pattern
 * 
 * Input  : iRow : 3  iCol = 4
 * 
 *  *  #  *  #
 *  *  #  *  #
 *  *  #  *  #
 * 
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
              if(j % 2 == 0)
              {
                System.out.print(" # ");
              }
              else
              {
                System.out.print(" * ");
              }
           }
            System.out.println();
        }
    }
}

public class Assignment37_4
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
