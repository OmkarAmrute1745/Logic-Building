/*
 * Q - Write a java program which accept two String from user and check whether first 
 *     string is the rotation of Second String or not
 * 
 *   Input  : abcdefg    cdefgab
 *   Output : True  
 */


import java.util.Scanner;

class StringX
{
   public String Str1;
   public String Str2;

   public StringX()
   {
       Str1 = "";
       Str2 = "";
   }

   public void accept(String s1, String s2)
   {
       Str1 = s1;
       Str2 = s2;
   }

   public boolean isRotation()
   {
       if (Str1.length() != Str2.length())
           return false;

       String temp = Str1 + Str1;
       return temp.contains(Str2);
   }
} 
 
public class Assignment45_1 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first string : ");
        String str1 = sobj.nextLine();

        System.out.println("Enter second string : ");
        String str2 = sobj.nextLine();

        StringX obj = new StringX();
        obj.accept(str1, str2);

        boolean bRet = obj.isRotation();

        if (bRet)
            System.out.println("True");
        else
            System.out.println("False");
    }
}
