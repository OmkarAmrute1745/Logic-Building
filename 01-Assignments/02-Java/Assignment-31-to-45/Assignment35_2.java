/*
 *  Q - write a program which 2 string from user and check whether contents of two string are equal or not
 * 
 * Input  : "Marvellous Infosystems"
 *          "Marvellous Infosystems"
 * Output : true
 */

import java.util.Scanner;

class StringDemo
{
    public boolean StrCmpX(String src,String dest)
    {
       boolean Flag = true;
        if((src.length() < dest.length()) || (src.length() > dest.length()))
        {
            return false;
        }

        for(int i = 0 ; i < src.length(); i++)
        {
            if(src.charAt(i) != dest.charAt(i))
            {
                Flag = false;
            }
        }
       return Flag;
    }
}

public class Assignment35_2
{  
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter First String : ");
       String str1 = sobj.nextLine();
       System.out.println("Enter Second String : ");
       String str2 = sobj.nextLine();

       StringDemo obj = new StringDemo();
       boolean bRet = obj.StrCmpX(str1, str2);

       if(bRet == true)
       {
        System.out.println("String is Equal");
       }
       else
       {
        System.out.println("String are Not Equal");
       }
    }
}
