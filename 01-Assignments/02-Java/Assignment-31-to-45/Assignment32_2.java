/*
 *  Q - Write a java program which accept N numbers from user and 
 *      Display all  such elements which is divisible by 5 
 *  
 * Input  : 6
 *     Elements : 85 66 3 80 93 88
 *   Output : 85 80
 */


 import java.util.*;
 class ArrayDemo
 {
     public int Arr[];
 
     public ArrayDemo(int iSize)
     {
         Arr = new int[iSize];
     }
 
     public void Accept()
     {
       Scanner sobj = new Scanner(System.in);
       
       System.out.println("Enter : " + Arr.length + " Elements" + "\t");
 
       for(int i = 0 ;  i < Arr.length ; i++ )
       {
        System.out.println("Enter Elements No : " + (i+1));
        Arr[i] = sobj.nextInt();
       }
     }
 
     public void Display()
     {
        System.out.println("Elements of Array are : ");
 
        for(int i = 0 ; i < Arr.length ; i++ )
        {
          System.out.print(Arr[i] + "\t");
        }
        System.out.println();
     }
         
     public void DisplayDiv()
     {
      
        for(int i = 0 ; i < Arr.length ; i++)
        {    
            if(Arr[i] % 5  == 0)
            {
              System.out.println(Arr[i] + "\t");
            }
        }
     }
 }
 
 
 public class Assignment32_2
 {
     public static void main(String arg[])
     {
         Scanner sobj = new Scanner(System.in);
         System.out.println("Enter the Size of Array You Want to create : ");
         int iSize = sobj.nextInt();
 
         ArrayDemo obj = new ArrayDemo(iSize);
         obj.Accept();
         obj.Display();
 
         obj.DisplayDiv();
     }    
 }
 