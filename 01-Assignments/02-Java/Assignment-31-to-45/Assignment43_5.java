/*
 *  Q - Write a java program which accept marks of N Students from user and Display class of each student
 * 
 *  Less than 35  -  fail
 *  Less than 50  -  Pass
 *  Less than 60  -  Second Class
 *  Less than 70  -  First class
 *  greter than 70 - First class with Distinction
 * 
 * Input :  67.3  45.8  88.9  77.5  55.2
 * 
 * Output : 67.3  First class
 *          45.8  Pass class
 *          88.9 First class with distinction
 *          77.5 First class with distinction
 *          55.2 Second class
 * 
 */


 import java.util.*;

 class ArrayX
 {
     protected float Arr[];
 
     public ArrayX(int iSize)
     {
         Arr = new float[iSize];
     }
 
     protected void Accept()
     {
         Scanner sobj = new Scanner(System.in);
 
         System.out.println("Please enter "+Arr.length + " elements ");
         for(int iCnt = 0; iCnt < Arr.length; iCnt++)
         {
             System.out.println("Enter the element no : "+ (iCnt+1));
             Arr[iCnt] = sobj.nextFloat();
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
  
    public void Percentage()
    {   
        for(int i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] < 35 )
            {
                System.out.println(Arr[i] +"  Fail");
            }
            else if(Arr[i] < 50)
            {
                System.out.println(Arr[i] +"  Pass Class");
            }
            else if(Arr[i] < 60)
            {
                System.out.println(Arr[i] +"  Second Class");
            }
            else if(Arr[i] < 70)
            {
                System.out.println(Arr[i] +"  First class");
            }
            else if(Arr[i] > 70)
            {
                System.out.println(Arr[i] + "  First class With Distinct");
            }

        }
    }
 }
 
 class Assignment43_5
 {
     public static void main(String ar[])
     {
         Scanner sobj = new Scanner(System.in);
 
         System.out.println("Enter the size of array that you want to create ");
         int iSize = sobj.nextInt();
 
        MyArray obj = new MyArray(iSize);
         
         obj.Accept();
         obj.Display();
         obj.Percentage();
        
     }
 }
 
 

