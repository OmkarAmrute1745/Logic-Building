/*
 * Q - Write a java program which accept number of rows and number of columns from user
 *      and Display below pattern
 * 
 * Input  : iRow : 4   iCol = 4
 * 
 *  A B C D
 *  a b c d
 *  A B C D
 *  a b c d
 * 
 */

 import java.util.Scanner;

 class Pattern
 {
    public void Display(int iRow , int iCol)
    {
        for(int i = 0 ; i < iRow ; i++ )
        {    
            char Value1 = 'A'; 
            char Value2 = 'a';
           for(int j = 0 ; j < iCol ; j++)
           {
             if(i % 2 == 0)
             {
               System.out.print(Value1 + "\t");
               Value1++;
             }
             else
             {
                System.out.print(Value2 + "\t");
                Value2 ++;
             }
           }
            System.out.println();
        }
    }
}

public class Assignment36_2
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
