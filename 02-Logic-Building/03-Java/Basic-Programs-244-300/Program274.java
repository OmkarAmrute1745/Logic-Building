//  toCharArray() method

import java.util.*;

public class Program274
{
   public static void main(String ar[])
   {
     Scanner sobj = new Scanner(System.in);
     
     System.out.println("Enter String : ");
     String str = sobj.nextLine();
     
      char Arr[] = str.toCharArray();
      
      System.out.println(Arr);
      // System.out.println("Data is : " + Arr);

   }         
}
