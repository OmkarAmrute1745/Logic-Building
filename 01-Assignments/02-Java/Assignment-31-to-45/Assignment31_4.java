/*
  Q - Write a Program which accept string from user and check whether it contains vowels in it or not
  (A,E,I,O,U)
  Input  : "Marvellos "
  Output : TRUE

  */
 
  import java.util.Scanner;

  class StringDemo
  {
      public boolean ChkVowel(String str)
      {
        boolean Flag = false;

           for(int i = 0 ; i < str.length() ; i++ )
           {
            if(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u'
            ||str.charAt(i) == 'A' || str.charAt(i) == 'E' || str.charAt(i) == 'I' || str.charAt(i) == 'O' || str.charAt(i) == 'U'
             )
             {
                Flag = true;
                break;
             }
           }    
          return Flag;
      }
  }
  
  class Assignment31_4
  {
      public static void main(String arg[])
      {
         Scanner sobj = new Scanner(System.in);
         
         System.out.println("Enter String : ");
         String str = sobj.nextLine();
        
         StringDemo obj = new StringDemo();
        
         Boolean bRet = obj.ChkVowel(str);
  
         if(bRet == true)
         {
           System.out.println(" String Contains Vowels " );
         }
         else
         {
            System.out.println("String Not Conatains vowels");
         }
      }
  } 
  
  