/*
 * Q - Write ajava Program which accept String and one character from user and 
 *     remove that character from string
 *  
 * Input : IndiaisDemoIndia
 *         i
 * Output : IndasDemoInda
 *  
 * 
 */

import java.util.*;

public class Assignment45_4 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        System.out.println("Enter character to remove : ");
        char ch = sobj.nextLine().charAt(0);

        String result = "";
        for (int i = 0; i < str.length(); i++)
        {
            if (str.charAt(i) != ch)
            {
                result += str.charAt(i);
            }
        }

        System.out.println(result);
    }
}
