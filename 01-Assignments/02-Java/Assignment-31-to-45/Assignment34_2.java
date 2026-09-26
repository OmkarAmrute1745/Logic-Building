/*
 * Q -  write a program which accept N numbers from user and accept one another number as No
 *      return index of first occurance of that No
 * 
 * Input :  6
 * No    : 66 // 0   1    2   3    4   5  
 * Elements :    85  66   3   66   93  88
 * Output  : 1
 * 
 * Input : 6
 * No    : 12
 * Elements : 85  11  3  15  11 111
 * Output   : -1
 *  
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
     }
 
     public int FirstOcc(int iNo)
     { 
        int index = -1;
        for(int i = 0 ; i < Arr.length ; i++)
        { 
          if(Arr[i] == iNo)
          {
              index = i;
              break;
          }
        }
        return index;
     }
 }
 
 public class Assignment34_2 
 {    
    public static void main(String ar[])
    { 
       Scanner sobj = new Scanner(System.in);
 
       System.out.println("Enter Number of Elements That you want to create :  ");
       int iSize = sobj.nextInt(); 
 
       Number nobj = new Number(iSize);
 
       nobj.Accept();
       nobj.Display();
      
       System.out.println("Enter No that you Want to check First Occurance of that No  : ");
       int iNo = sobj.nextInt();
       int i =  nobj.FirstOcc(iNo);
    
      System.out.println("Index : " + i);
     
    }
 }
 