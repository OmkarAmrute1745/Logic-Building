// count Small Letters  

import java.util.*;

class MarvellousX
{
    public int SmallCount(String s)
    {
         int iCnt = 0;
     for(int i = 0 ; i < s.length()  ; i++)
     {         
         if((s.charAt(i) >= 'a') &&(s.charAt(i) <= 'z'))
         {
            iCnt++;
         }
      }
      return iCnt;
    }
}           

public class Program271
{
   public static void main(String ar[])
   {
     Scanner sobj = new Scanner(System.in);
     System.out.println("Enter String : ");
     String str = sobj.nextLine();

     MarvellousX obj = new MarvellousX();
     int iRet =  obj.SmallCount(str);
    
      System.out.println("Number of Small Case Letter is : " + iRet);
   }         
}
