/*
 * Q - Write a java program which accept array of characters from user and replace each 
 *     capital character with its corresponding small character
 * 
 * Input  : b N j B R b A d G G
 * Output : b n j b r b a d g g 
 * 
 *  // Convert into Upper-case
 *     ch[i] = (char)(ch[i] - 'a' + 'A');     
 *
 *  // Convert into Lower-Case
         ch[i] = (char)(ch[i] + 'a' - 'A');    
 */


 import java.util.*;

 class ArrayX
 {
     public void ArrayReplace(String Str)
     {
        char Arr[] = Str.toCharArray();
       for(int i = 0 ; i < Arr.length; i++)
      {
          if((Arr[i] >= 'A') &&(Arr[i] <= 'Z'))
          {
             Arr[i] = (char)(Arr[i] + 'a' - 'A')  ;
          }
       }
       
       for(int i = 0 ; i < Arr.length ; i++)
       {
         System.out.print(Arr[i] + "\t");
       }
    }
 
 }
 
 public class Assignment44_1
 {
    public static void main(String ar[])
    {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter String : ");
      String Str = sobj.nextLine();
     
     
      ArrayX obj = new ArrayX();
      obj.ArrayReplace(Str);
      
    }         
 }
 

 

