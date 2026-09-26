//  toCharArray() method print using loop

import java.util.*;

public class Program275
{
   public static void main(String ar[])
   {
     Scanner sobj = new Scanner(System.in);
     
     System.out.println("Enter String : ");
     String str = sobj.nextLine();
     
      char Arr[] = str.toCharArray();
      
      for(int i = 0; i < Arr.length ; i++)
      {
        System.out.println(Arr[i]);
      }
   }         
}
