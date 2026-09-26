/*
 *  Q - write a Program which accept 2 string from user and check whether 
 *     First N content of two string are equal or not
 * 
 * Input  : "Marvellous Infosystems"
 *          "Marvellous Logic"
 *           10
 * Output : true
 * 
 */


 import java.util.Scanner;

 class StringDemo
 {
     public boolean StrCmpX(String src,String dest,int iNo)
     {
        boolean Flag = true;
 
         for(int i = 0 ; i < iNo; i++)
         {
             if(src.charAt(i) != dest.charAt(i))
             {
                 Flag = false;
             }
         }
        return Flag;
     }
 }
 
 public class Assignment35_3
 {  
     public static void main(String arg[])
     {
        Scanner sobj = new Scanner(System.in);
 
        System.out.println("Enter First String : ");
        String str1 = sobj.nextLine();
        System.out.println("Enter Second String : ");
        String str2 = sobj.nextLine();
        System.out.println("Enter No : ");
        int iNo = sobj.nextInt();

        StringDemo obj = new StringDemo();
        boolean bRet = obj.StrCmpX(str1, str2,iNo);
 
        if(bRet == true)
        {
         System.out.println("String is Equal");
        }
        else
        {
         System.out.println("String are Not Equal");
        }
     }
 }
 