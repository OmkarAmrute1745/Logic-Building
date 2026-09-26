/*
 * Q - Write a java Program  which accept String from usera and Print Frequency of each Word
 *  
 * Input  :  India is Demo India Hello Demo
 * 
 * Output : 
 *          India  2
 *          is     1
 *          Demo   2
 *          Hello  1
 * 
 */

import java.util.*;

public class Assignment45_2 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        String words[] = str.split("\\s+");
        Map<String, Integer> wordCount = new LinkedHashMap<>();

        for (String word : words)
        {
            word = word.trim();
            if (!word.isEmpty())
            {
                wordCount.put(word, wordCount.getOrDefault(word, 0) + 1);
            }
        }

        for (Map.Entry<String, Integer> entry : wordCount.entrySet())
        {
            System.out.println(entry.getKey() + "     " + entry.getValue());
        }
    }
}
