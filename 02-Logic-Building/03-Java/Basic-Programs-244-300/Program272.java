// Count Capital letters 

import java.util.*;

class MarvellousX
{
    public int CapitalCount(String s)
    {
         int iCnt = 0;
     for(int i = 0 ; i < s.length()  ; i++)
     {
         if((s.charAt(i) >= 'A') &&(s.charAt(i) <= 'Z'))
         {
            iCnt++;
         }
      }
      return iCnt;
    }

}

public class Program272
{
   public static void main(String ar[])
   {
     Scanner sobj = new Scanner(System.in);
     System.out.println("Enter String : ");
     String str = sobj.nextLine();

     MarvellousX obj = new MarvellousX();
     int iRet =  obj.CapitalCount(str);
    
      System.out.println("Number of Capital Case Letter is : " + iRet);
   }         
}
