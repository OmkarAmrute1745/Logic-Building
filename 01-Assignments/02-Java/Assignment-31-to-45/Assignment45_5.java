/*
 * Q - Write a java Program which accept expression from user check whether the expression is
 *       balanced parenthesised or not (Expression should contains only circular bracket)
 * 
 *  Input  : (a+(f-g)*2(a-d))
 *  Output : True
 * 
 *  Input : (a+(f-g) *2 (a-d
 *  Output : False
 * 
 */

import java.util.*;

public class Assignment45_5 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter expression : ");
        String expr = sobj.nextLine();

        boolean bRet = isBalanced(expr);

        if (bRet)
            System.out.println("True");
        else
            System.out.println("False");
    }

    public static boolean isBalanced(String expr)
    {
        int count = 0;

        for (int i = 0; i < expr.length(); i++)
        {
            if (expr.charAt(i) == '(')
            {
                count++;
            }
            else if (expr.charAt(i) == ')')
            {
                count--;
                if (count < 0)
                    return false;
            }
        }

        return count == 0;
    }
}
