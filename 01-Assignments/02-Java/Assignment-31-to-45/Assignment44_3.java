/*
 * Q - Accept array of characters from user and accept one character return occurance of 
 *      that character without considering its case 
 *         
 * Input  :  b N e B R b A i G i B
 *           b
 * Output : 1
 */


import java.util.*;

 class ArrayX
 {
     public int Search(String Str,String ch)
     { 
        char Arr[] = Str.toCharArray();
        char ch1 = ch.charAt(0);
        char ch2 = ch.charAt(0); 
      
        if((ch1 >= 'a') && (ch1 <= 'z'))
        {
            ch1 = (char) (ch1 - 'a' + 'A');
        }
        else if((ch2 >= 'A') && ( ch2 <= 'Z'))    
        {
            ch2 = (char) (ch2 + 'a' - 'A');
        }
 
        int icnt = -1;
        for (int i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] == ch1 || Arr[i] == ch2)
            {  
                icnt = i+1;
                break;
            }
        }
      return icnt; 
    }
 
 }
 
 public class Assignment44_3
 {
    public static void main(String ar[])
    {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter String : ");
      String Str = sobj.nextLine();
      
      System.out.println("Enter Character to Search : ");
      String ch = sobj.nextLine();
     
      ArrayX obj = new ArrayX();
      int iAns =  obj.Search(Str,ch);
      System.out.println("Occurance index is : " + iAns);


      
    }         
 }
 

 

