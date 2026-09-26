/*
 * Q - Accept string from user nad check whether the string is palindrome or not withoutconsidering its case
 * 
 * Input  : "1abccBA1"
 * Output : true
 */

import java.util.Scanner;

class  StringDemo
{
  
    public boolean StrPalndrome(String str)
    {
       boolean Flag = false ;
       char Arr[] = str.toCharArray();
        char iStart = '0' ; 
        char End  ;
        


        return Flag;
    }
}

public class Assignment35_5 
{
 public static void main(String arg[])
 {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();

    StringDemo obj = new StringDemo();
    boolean bRet = obj.StrPalndrome(str);

    if(bRet == true)
    {
        System.out.println("String is Palindrome");
    }
    else
    {
      System.out.println("String is Not Palindrome");
    }
 }     
}
