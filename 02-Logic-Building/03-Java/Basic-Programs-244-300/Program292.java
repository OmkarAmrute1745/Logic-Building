//4. Pattern Printing  iCnt%10 
/*
  Row = 4
  col = 4
1       2       3       4
5       6       7       8
9       0       1       2
3       4       5       6
*/


import java.util.*;

class Pattern
{
    public void Display(int iRow , int iCol)
    {   
        int iCnt = 1;
       for(int i = 0 ; i < iRow ; i++)
       {
         for(int j = 0 ; j < iCol ; j++)
         {
             System.out.print(iCnt%10 +"\t");
             iCnt++;
         }
         System.out.println();
       }   
    }
}

class Program292
{
   public static void main(String a[])
   {
     Pattern pobj = new Pattern();
     Scanner sobj = new Scanner(System.in);
     
     System.out.println("Enter Number of rows : ");
     int i = sobj.nextInt();


     System.out.println("Enter Number of columns : ");
     int j = sobj.nextInt();

     pobj.Display(i,j);
   }    
}
