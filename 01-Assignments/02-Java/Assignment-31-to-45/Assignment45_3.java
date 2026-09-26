/*
 *  Write a java Program which accept string from user and Display such 
 *    a word which is Occurs maximum numbers of times
 * 
 *  Input  : India is Demo India Hello Demo India
 *  Output : India
 *  
 */

import java.util.*;

public class Assignment45_3 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String str = sobj.nextLine();

        String words[] = str.split("\\s+");
        Map<String, Integer> wordCount = new HashMap<>();

        for (String word : words)
        {
            word = word.trim();
            if (!word.isEmpty())
            {
                wordCount.put(word, wordCount.getOrDefault(word, 0) + 1);
            }
        }

        String maxWord = "";
        int maxCount = 0;

        for (Map.Entry<String, Integer> entry : wordCount.entrySet())
        {
            if (entry.getValue() > maxCount)
            {
                maxCount = entry.getValue();
                maxWord = entry.getKey();
            }
        }

        System.out.println(maxWord);
    }
}
