// Accept 2 numbers and display Common Factors of that 2 numbers


import java.util.*;
 
class Numbers
{
    public void CommonFactorsDisplay(int iNo1 , int iNo2)
    {
       int iCnt = 0;
         
        System.out.println("Common Factors Are : ");
         for(iCnt = 1 ; (iCnt <= iNo1/2) && (iCnt <= iNo2); iCnt++)
         {
            if((iNo1 % iCnt == 0) && (iNo2 % iCnt == 0))
            {
                System.out.println(iCnt);
            }
         }
    }
}

class Program254
{
    public static void main(String ar[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter First Number : ");
      int iNo1 = sobj.nextInt();
      
      System.out.println("Enter Second Number : ");
      int iNo2 = sobj.nextInt();

      Numbers nobj = new Numbers();

      nobj.CommonFactorsDisplay(iNo1,iNo2);

    }
}