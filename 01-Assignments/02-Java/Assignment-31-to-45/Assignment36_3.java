/*
 * Q - Write a java program which accept number of rows and number of columns from user
 *      and Display below pattern
 * 
 * Input  : iRow : 3   iCol = 5
 * 
 * A  A  A  A  A
 * B  B  B  B  B
 * C  C  C  C  C
 * 
 */

 import java.util.Scanner;

 class Pattern
 {
    public void Display(int iRow , int iCol)
    {   
        char value = 'A'; 
        for(int i = 0 ; i < iRow ; i++ )
        {    
           for(int j = 0 ; j < iCol ; j++)
           {
             System.out.print(value + "\t");
           }
            System.out.println();
            value++;
        }
    }
}

public class Assignment36_3
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
