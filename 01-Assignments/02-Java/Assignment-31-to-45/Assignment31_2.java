/*
  Q - Write a Program which accept String from user and count number of Small characters
  Input  : "Marvellous"
  Output : 9

  */
 
  import java.util.Scanner;

  class StringDemo
  {
      public int CountSmall(String str)
      {
          int iCnt = 0; 
          
          for(int i = 0 ; i < str.length() ; i++ )
          {
              if((str.charAt(i) >= 'a') && (str.charAt(i) <= 'z'))
              {
                  iCnt++;
              }
          }
          return iCnt;
      }
  }
  
  class Assignment31_2
  {
      public static void main(String arg[])
      {
         Scanner sobj = new Scanner(System.in);
         
         System.out.println("Enter String : ");
         String str = sobj.nextLine();
        
         StringDemo obj = new StringDemo();
        
         int iRet = obj.CountSmall(str);
  
         System.out.println("Small Letter Count is  : " + iRet);
         
      }
  } 
  
  