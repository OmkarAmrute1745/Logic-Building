/*
 * Q - Write a java program which accept two arrays from user and display even contents of each array
 * 
 * Input  :  2   9   6   5   2   3
 *           45  6   12  18  23  4
 *  
 * Output  : 2  6  2
 *           6  12  18  4
 *           
 */


 import java.util.Scanner;

 class ArrayX
 {
     protected int Arr1[];    // Characterstics 
     protected int Arr2[];
 
     public ArrayX(int iSize1 , int iSize2) // Parameterised Constructor
     {
         Arr1 = new int[iSize1];   // Allocate Resource
         Arr2 = new int[iSize2];
     }
 
     protected void Accept(int Arr[])
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
 
   protected void Display(int Arr[])
   {  
      System.out.println();
      System.out.println("Elements Of Array are : ");
 
       for(int i = 0 ; i < Arr.length ; i++)
       {
          System.out.print(Arr[i] + "\t");
       }
       System.out.println();
   }

    protected void DisplayE(int Arr[])
    {
        for(int i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] %2 == 0 )
            {
                System.out.print(Arr[i] + "\t"); 
            }
        }
        System.out.println();
    } 
 
 }
 
 class MyArray extends ArrayX
 {
     
     public MyArray(int iSize1 , int iSize2)
     {
        super(iSize1, iSize2);
     }
 
     public void DisplayEven()
     {   
         Accept(Arr1);
         Accept(Arr2);
         
         Display(Arr1);
         Display(Arr2);
         
         DisplayE(Arr1);
         DisplayE(Arr2);
     }
 }
 
 
 public class Assignment41_2
 { 
     public static void main(String arg[])
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter 1st Array Size : ");
        int iSize1 = sobj.nextInt();
 
        System.out.println("Enter 2nd Array Size : ");
        int iSize2 = sobj.nextInt();
 
        MyArray mobj = new MyArray(iSize1, iSize2);
        mobj.DisplayEven();
     }    
 }
 