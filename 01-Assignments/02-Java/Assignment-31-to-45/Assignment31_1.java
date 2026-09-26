/*
  Q - Write a Program which accept String from user and count number of capital characters
  Input  : "Marvellos Multi OS"
  Output : 4 

  */
 
import java.util.Scanner;

class StringDemo
{
    public int CountCapital(String str)
    {
        int iCnt = 0; 
        
        for(int i = 0 ; i < str.length() ; i++ )
        {
            if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}

class Assignment31_1
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);
       
       System.out.println("Enter String : ");
       String str = sobj.nextLine();
      
       StringDemo obj = new StringDemo();
      
       int iRet = obj.CountCapital(str);

       System.out.println("Capital Letter Count is  : " + iRet);
       
    }
} 

