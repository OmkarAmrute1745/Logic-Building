/*
 * Q - Write a java program which accept Array from user and reverse each number(Digit) of that array 
 * 
 *  Input  :  89 687 56 549 87 9
 *  Output :  98 786 65 945 78 9
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
  
    public void ReverseArrayDigits()
    {   
        int iDigit = 0;
        int iNo = 0;
        int iRev = 0;
        for(int i = 0 ; i < Arr.length ; i++)
        {
           iRev = 0;
           iNo = Arr[i]; 
          while(iNo != 0)
          {
            iDigit = iNo % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
          }
          Arr[i] = iRev;
        }
    }
 }
 
 class Assignment43_1
 {
     public static void main(String ar[])
     {
         Scanner sobj = new Scanner(System.in);
 
         System.out.println("Enter the size of array that you want to create ");
         int iSize = sobj.nextInt();
 
        MyArray obj = new MyArray(iSize);
         
         obj.Accept();
         obj.Display();
         obj.ReverseArrayDigits();
         obj.Display();
 
     }
 }
 
 