/*
 * Write a java Program which accept array from user and display below pattern
 * 
 * Input  :  8  9  7  6  4  2  4
 * 
 * Output  : 
 *
      *       *       *       *       *       *       *       *       *
      *       *       *       *       *       *       *       *       *
      *       *       *       *       *       *       *
      *       *       *       *       *       *
      *       *       *       *
      *       *
      *       *       *       *
 
 
 *    
 * 
 */

 import java.util.*;

 class ArrayX
 {
     protected int Arr[];   
 
     public ArrayX(int iSize) 
     {
         Arr = new int[iSize];  
     }
 
     protected void Accept()
     {
         Scanner sobj = new Scanner(System.in);
        
         System.out.println("Enter " + Arr.length + "  Elements : ");
 
         for(int i = 0 ; i < Arr.length; i++)
         {
             System.out.println(" Enter " + (i+1) + " Element : ");
             Arr[i] = sobj.nextInt();
         }
         System.out.println();
     }
 
   protected void Display()
   {  
      System.out.println();
      System.out.println("Elements Of Array are : ");
 
       for(int i = 0 ; i < Arr.length ; i++)
       {
          System.out.print(Arr[i] + "\t");
       }
       System.out.println();
    }
 
 }

class MyArray extends ArrayX
{
   MyArray(int iSize)
   {
      super(iSize);
   }

    void Pattern()
    {
    
      for(int i = 0 ; i < Arr.length ; i++)
      {
          for(int j = 0 ; j < Arr[i] ; j++)
          {
            System.out.print("*" + "\t");
          }
          System.out.println();
      }

    } 
}



public class Assignment44_5 
{
    public static void main(String ar[])
  {
     Scanner sobj = new Scanner(System.in);

     System.out.println("Enter Array Size : ");
     int iSize = sobj.nextInt();
     
     MyArray mobj = new MyArray(iSize);
     mobj.Accept();
     mobj.Display();
     mobj.Pattern();
   }

}
