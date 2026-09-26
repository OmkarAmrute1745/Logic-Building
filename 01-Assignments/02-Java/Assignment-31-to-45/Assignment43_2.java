/*
 * Q - Write a java program which accept Array from user and replace each member with summation of its digit
 * 
 *  Input  :  89 687 56 549 87 9
 *  Output :  17 21  11 18  15 9
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
 
         System.out.println("Please enter "+Arr.length + " elements ");
         for(int iCnt = 0; iCnt < Arr.length; iCnt++)
         {
             System.out.println("Enter the element no : "+ (iCnt+1));
             Arr[iCnt] = sobj.nextInt();
         }
     }
 
     protected void Display()
     {
         System.out.println("Elements of array are : ");
 
         for(int iCnt =0; iCnt < Arr.length; iCnt++)
         {
             System.out.print(Arr[iCnt]+"\t");
         }
 
         System.out.println();
     }
 }
 
 class MyArray extends ArrayX
 {
     public MyArray(int iSize)
     {
         super(iSize);
     }
  
    public void SumArrayDigits()
    {   
        int iDigit = 0;
        int iNo = 0;
        int iSum = 0;
        for(int i = 0 ; i < Arr.length ; i++)
        {
           iSum = 0;
           iNo = Arr[i]; 
          while(iNo != 0)
          {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
          }
          Arr[i] = iSum;
        }
    }
 }
 
 class Assignment43_2
 {
     public static void main(String ar[])
     {
         Scanner sobj = new Scanner(System.in);
 
         System.out.println("Enter the size of array that you want to create ");
         int iSize = sobj.nextInt();
 
        MyArray obj = new MyArray(iSize);
         
         obj.Accept();
         obj.Display();
         obj.SumArrayDigits();
         obj.Display();
 
     }
 }
 
 