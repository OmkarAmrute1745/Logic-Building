// string in java 
// convert string into chararray
// count small letters 

//2. for each loop

import java.util.*;

class Program479
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string");
        String str = sobj.nextLine();
        
        char Arr[] = str.toCharArray();

        System.out.println(str.length());
        System.out.println(Arr.length);
        
        int Count = 0;

        for(char ch : Arr)
        {
            if((ch >= 'a') && (ch <= 'z'))
            {
                Count++;
            }
        }
        System.out.println("Small Characters are : " + Count);
    }
}