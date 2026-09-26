/*
 *  Q - write a Program which accept string from user and reverse the content of that string by toggling the case
 * 
 * Input  : "aCBdef"
 * Output : "FEDcbA"
 *          
 */


 import java.util.Scanner;

 class StringDemo
 {
     public void StrRevTogX(String str)
     {
        char Arr[] = str.toCharArray();
        
     }
 }
 
 public class Assignment35_4
 {  
     public static void main(String arg[])
     {
        Scanner sobj = new Scanner(System.in);
 
        System.out.println("Enter First String : ");
        String str1 = sobj.nextLine();

        StringDemo obj = new StringDemo();
        obj.StrRevTogX(str1);
        

     }
 }
 