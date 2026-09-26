/*
 * Q - Write a java program which accept two arrays from user and return difference 
 *    between Summation of arrays
 *
 *  Input  : 2  9  7  5  2  3
 *           9  3  5  5
 * OutPut : 6
 *   
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

   public int SumArrayX(int Arr[])
   {   
       int  iSum = 0;

       for(int i = 0 ; i < Arr.length ; i++)
       {
          iSum = iSum + Arr[i];   
       }
       return iSum;
   } 
}
 
 class MyArray extends ArrayX
 {
     
     public MyArray(int iSize1 , int iSize2)
     {
        super(iSize1, iSize2);
     }
 
     public void SumArrayDiff()
     {   
         Accept(Arr1);
         Accept(Arr2);
         
         Display(Arr1);
         Display(Arr2);
         
        int iAns1 =  SumArrayX(Arr1);

        int iAns2 = SumArrayX(Arr2);
        System.out.println("Summation Diff is : " + (iAns1 - iAns2));       
     }
 }
 
 
 public class Assignment42_1
 { 
     public static void main(String arg[])
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter 1st Array Size : ");
        int iSize1 = sobj.nextInt();
 
        System.out.println("Enter 2nd Array Size : ");
        int iSize2 = sobj.nextInt();
 
        MyArray mobj = new MyArray(iSize1, iSize2);
        mobj.SumArrayDiff();
     }    
 }
 