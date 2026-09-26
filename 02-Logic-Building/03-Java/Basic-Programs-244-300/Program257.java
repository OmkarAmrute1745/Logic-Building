//2. Armstrong number 153   (* * *)  0000 (****)
// in 1 function

import java.util.*;

class Digits
{ 
    public boolean CheckArmstrong(int iNo)
    {
     int iDigitCount = 0;
     int iTemp = iNo;
     int iDigit = 0;
     int iCnt = 0;
     int iPower = 1;
     int iSum = 0;

     while(iTemp != 0)  //Calculate no of digits
     {
        iDigitCount++;
        iTemp = iTemp / 10;
     }
     
     iTemp = iNo;

     while(iTemp != 0)
     {
        iDigit = iTemp % 10;
       
        for(iCnt = 1; iCnt <= iDigitCount ; iCnt++) // Calculate Power
        {
           iPower = iPower * iDigit;
        }
        iSum = iSum + iPower;
        iPower = 1;             // *****//
        
         iTemp = iTemp / 10;
     }
     if(iSum == iNo)
     {
        return true;
     }
     else
     {
        return false;
     }
   }
}

class Program257
{
    public static void main(String ar[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter First Number : ");
      int iNo = sobj.nextInt();
      
      Digits nobj = new Digits();
     
      boolean bRet = nobj.CheckArmstrong(iNo);

      if(bRet == true)
      {
        System.out.println(iNo + " is a Armstrong Number ");
      }
      else 
      {
         System.out.println(iNo + " is Not Armstrong number ");
      }
    }
}