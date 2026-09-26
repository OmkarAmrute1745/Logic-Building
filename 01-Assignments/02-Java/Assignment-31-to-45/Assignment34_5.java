/*
 * Q -  write a program which accept N numbers from user and return Product of odd elements
 * 
 * Input :  6
 * 
 * Elements :  15  66   3  70   10  88
 * Output  :  45
 * 
 * 
 * Input  : 6 
 * 
 * Elements :  44  66  72  70  10  88
 * Output   :  0
 */

 import java.util.Scanner;

 class Number
 {
     public int Arr[];
 
     public Number(int iSize)
     {
        Arr = new int[iSize];
     }
 
    public void Accept()
     {
         Scanner sobj = new Scanner(System.in);
 
         System.out.println("Enter " + Arr.length + " Numbers : ");
         for(int i = 0 ; i < Arr.length ; i++)
         {
           System.out.println("Enter " + (i+1) +" Number " + " : ");
           Arr[i] = sobj.nextInt();
         }
     }
 
     public void Display()
     {
        System.out.println("Elements are : " );
        for(int i = 0 ; i < Arr.length ; i++ )
        {
           System.out.print(Arr[i] + " \t");
        }
        System.out.println();
     }
 
     public int Product()
     {  
         int iPro = 1; 
         for(int i = 0 ; i < Arr.length ; i++)
         {
            if(Arr[i] % 2 != 0)
            {
                iPro = iPro * Arr[i];
            }
         }
         return iPro;
     }
  }
 
 public class Assignment34_5
 {    
    public static void main(String ar[])
    { 
       Scanner sobj = new Scanner(System.in);
 
       System.out.println("Enter Number of Elements That you want to create :  ");
       int iSize = sobj.nextInt(); 
 
       Number nobj = new Number(iSize);
 
       nobj.Accept();
       nobj.Display();
      
        int iAns = nobj.Product();
        System.out.println("Product is : " + iAns);
    }
 }
 