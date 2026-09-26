/*
 * Q - Write a java program which accept two array from user and Copy the contets of that array 
 *     into another array and return new array
 * 
 * Input  :  12   57  28  3
 *           99   23  54  6  67
 *  
 * Output   : 12  57  28  3  99  23  54  6  67
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
 }
 
 class MyArray extends ArrayX
 {
     
     public MyArray(int iSize1 , int iSize2)
     {
        super(iSize1, iSize2);
     }
 
     public int[] CopyArray()
     {   
         Accept(Arr1);
         Accept(Arr2);
         
         Display(Arr1);
         Display(Arr2);
       
         int iSize1 = Arr1.length;
         int iSize2 = Arr2.length;
         
         int Arr3[] = new int[iSize1 + iSize2];
         int j = 0;
         for(int i = 0 ; i < Arr3.length ; i++)
         {
            if(i < Arr1.length)
            {
               Arr3[i] = Arr1[i];
            }
            else
            {
              if(j < Arr2.length)
              {
                Arr3[i] = Arr2[j];
                j++;
              }
              
            }
         }
       return Arr3;
     }
 }
 
 
 public class Assignment42_4
 { 
     public static void main(String arg[])
     {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter 1st Array Size : ");
        int iSize1 = sobj.nextInt();
 
        System.out.println("Enter 2nd Array Size : ");
        int iSize2 = sobj.nextInt();
 
        MyArray mobj = new MyArray(iSize1, iSize2);
        int Arr[] =  mobj.CopyArray();
      
           System.out.println("Elements Of Array are : ");
      
            for(int i = 0 ; i < Arr.length ; i++)
            {
               System.out.print(Arr[i] + "\t");
            }
            System.out.println();
     }    
 }
 