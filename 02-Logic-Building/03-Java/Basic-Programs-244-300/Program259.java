// 2 Template  Problems on n numbers 

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

public class Program259
{
   public static void main(String arg[])
   {   
       ArrayX obj = new ArrayX(5);
       obj.Accpet();
       obj.Display();
   }    
}
