/*
 * Q - Write a java program which accept array of characters from user and  count vowels
 * 
 * Input  : b N e B R b A i G i
 * Output : 4
 * 
 */


 import java.util.*;

 class ArrayX
 {
     public int CountVowels(String Str)
     {
        char Arr[] = Str.toCharArray();
        int iCnt = 0;
       for(int i = 0 ; i < Arr.length; i++)
      {
          if((Arr[i] == 'A') || (Arr[i] == 'E') || (Arr[i] == 'I') || (Arr[i] == 'O') ||(Arr[i] == 'U') 
               || (Arr[i] == 'a') ||(Arr[i] == 'e') || (Arr[i] == 'i') ||(Arr[i] == 'o') || (Arr[i] == 'u'))
            {
               iCnt ++; 
            }
       }
       
       return iCnt;
    }
 
 }
 
 public class Assignment44_2
 {
    public static void main(String ar[])
    {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter String : ");
      String Str = sobj.nextLine();
     
     
      ArrayX obj = new ArrayX();
      int  iAns =  obj.CountVowels(Str);
      
      System.out.println("Count is : " + iAns);
    }         
 }
 

 

