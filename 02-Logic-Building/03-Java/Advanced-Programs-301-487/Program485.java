// word count 
// problem when multiple white spaces 

import java.util.*;

class Program485
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        String Arr[] = str.split(" ", 0);

        System.out.println("Number of Words are : " + Arr.length);
    }
}