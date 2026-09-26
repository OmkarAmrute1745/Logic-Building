// 2. Even Factors Display

import java.util.*;

class Numbers
{
    public void EvenFactorsDisplay(int iNo)
    {
       int iCnt = 0;

       for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
        {
            if(((iNo % iCnt) == 0) && ((iCnt % 2 ) == 0))
            {
               System.out.println("Even Factors is : " + iCnt);    
            }
        }
    }
}

class Program252
{
    public static void main(String ar[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number : ");
      int iNo = sobj.nextInt();
      
      Numbers nobj = new Numbers();

      nobj.EvenFactorsDisplay(iNo);

    }
}