/*
 * Q -  write a program which accept N numbers from user and accept one another number as No
 *     Check whether No is Presend or Not
 * 
 * Input : 6
 * No    : 66
 * Elements : 85  66   3  66  93  88
 * Output  : TRUE
 * 
 * Input : 6
 * No    : 12
 * Elements : 85  11  3  15  11 111
 * Output   : FALSE
 *  
 */

import java.util.Scanner;

class Number
{
    public int Arr[];

    public Number(int iSize)
    {
       Arr = new int[iSize];
    }

   public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter " + Arr.length + " Numbers : ");
        for(int i = 0 ; i < Arr.length ; i++)
        {
          System.out.println("Enter " + (i+1) + " : ");
          Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
       System.out.println("Elements are : " );
       for(int i = 0 ; i < Arr.length ; i++ )
       {
          System.out.print(Arr[i] + " \t");
       }
    }

    public boolean Check(int iNo)
    {
      boolean Flag = false;
       
       for(int i = 0 ; i < Arr.length ; i++)
       {
         if(Arr[i] == iNo)
         {
            Flag = true;
            break;
         }
       }
        return Flag;
    }
}

public class Assignment34_1 
{    
   public static void main(String ar[])
   { 
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number of Elements That you want to create :  ");
      int iSize = sobj.nextInt(); 

      Number nobj = new Number(iSize);

      nobj.Accept();
      nobj.Display();
     
      System.out.println("Enter No that you Want to check Present or Not : ");
      int iNo = sobj.nextInt();
      boolean bRet = nobj.Check(iNo);
      
      if(bRet == true)
      {
        System.out.println("Number is Present");
      }
      else
      {
        System.out.println("Number is Not Present");
      }
   }
}
