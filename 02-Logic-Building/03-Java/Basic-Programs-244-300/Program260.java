// 3 Template  Problems on n numbers (Complete template)

import java.util.*;

class ArrayX
{
   public int Arr[];  
   
   public ArrayX(int iSize)
   {
      Arr = new int[iSize]; 
   }

   public void Accpet()
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter  : " + Arr.length + "Elements");

      for(int iCnt = 0; iCnt < Arr.length ; iCnt++)
      {
        System.out.println("Enter the Elements No :  " + (iCnt + 1));
        Arr[iCnt] = sobj.nextInt();
    }
   }
         
   public void Display()
   {
    System.out.println("Elements of Array are : ");

    for(int iCnt = 0 ; iCnt < Arr.length; iCnt ++)
    {
        System.out.print(Arr[iCnt] + "\t");
    }
    System.out.println();
   }
}

public class Program260
{
   public static void main(String arg[])
   {   
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the size of array that you want to create");
      int iSize = sobj.nextInt();

       ArrayX obj = new ArrayX(iSize);
       obj.Accpet();
       obj.Display();
   }    
}
