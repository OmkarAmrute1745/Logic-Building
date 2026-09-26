/*
 * Q - Accept array of characters from user and accept one character return occurance of 
 *      that character without considering its case 
 *         
 * Input  :  b N e B R b A I O G  i 
 *           
 * Output : 3  (7-4)
 */


 import java.util.*;

 class ArrayX
 {
     public int Diff(String Str)
     { 
        char Arr[] = Str.toCharArray();
 
        int icap1 = 0;
        int iSma2 = 0;

        for (int i = 0 ; i < Arr.length ; i++)
        {
            if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
            {
                iSma2++;    
            }
            else if((Arr[i] >= 'A') && ( Arr[i] <= 'Z'))    
            {
               icap1++;
            }
        }
      return icap1 - iSma2; 
    }
 
 }
 
 public class Assignment44_4
 {
    public static void main(String ar[])
    {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter String : ");
      String Str = sobj.nextLine();
     
      ArrayX obj = new ArrayX();
      int iAns =  obj.Diff(Str);
      System.out.println("Diff is : " + iAns);
      
    }         
 }
 

 

