/*
 * Q - Write a java program which accept Array of characters from user and count number of capital letters
 * 
 *  Input  :  b N j B R b A d G G 
 *  Output :  6
 *  
 * 
 */

 import java.util.*;

 class ArrayX
 {
     public int CapitalCount(String s)
     {
       int iCnt = 0;
       char Arr[] = s.toCharArray();

       for(int i = 0 ; i < Arr.length; i++)
      {
          if((Arr[i] >= 'A') &&(Arr[i] <= 'Z'))
          {
             iCnt++;
          }
       }
       return iCnt;
     }
 
 }
 
 public class Assignment43_4
 {
    public static void main(String ar[])
    {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter String : ");
      String str = sobj.nextLine();
 
       ArrayX obj = new ArrayX();
       int iRet =  obj.CapitalCount(str);
     
       System.out.println("Number of Capital Case Letter is : " + iRet);
    }         
 }
 

 