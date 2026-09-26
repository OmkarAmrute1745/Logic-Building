/*
  Q - Write a Program which accept String from user and return  of diff between Small and capital frequency
  Input  : "MarvelloS "
  Output : 6   (8 - 2)

  */
 
  import java.util.Scanner;

  class StringDemo
  {
      public int CountDiff(String str)
      {
          int iCnt1 = 0; 
          int iCnt2 = 0;

          for(int i = 0 ; i < str.length() ; i++ )
          {
              if((str.charAt(i) >= 'A') && (str.charAt(i) <= 'Z'))
              {
                  iCnt1++;
              }
              else if((str.charAt(i) >= 'a' ) && (str.charAt(i) <= 'z'))
              {
                iCnt2++;
              }
          }
          return iCnt1 - iCnt2;
      }
  }
  
  class Assignment31_3
  {
      public static void main(String arg[])
      {
         Scanner sobj = new Scanner(System.in);
         
         System.out.println("Enter String : ");
         String str = sobj.nextLine();
        
         StringDemo obj = new StringDemo();
        
         int iRet = obj.CountDiff(str);
  
         System.out.println(" Diff Count is  : " + iRet);
         
      }
  } 
  
  