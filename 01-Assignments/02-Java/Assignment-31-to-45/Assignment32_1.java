/*
 Q - Write program which accept N numbers from user and return differenc betweeen Summation of 
     even elements and Summation of Odd Elemnts
  Input  : 6
      Elements : 85 66 3 80 93 88
  Output : 53  (234 - 181)     
 */


import java.util.*;
class ArrayDemo
{
    public int Arr[];

    public ArrayDemo(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
      Scanner sobj = new Scanner(System.in);
      
      System.out.println("Enter : " + Arr.length + " Elements");

      for(int i = 0 ;  i < Arr.length ; i++ )
      {
       System.out.println("Enter Elements No : " + (i+1));
       Arr[i] = sobj.nextInt();
      }
    }

    public void Display()
    {
       System.out.println("Elements of Array are : ");

       for(int i = 0 ; i < Arr.length ; i++ )
       {
         System.out.println(Arr[i] + "\t");
       }
       System.out.println();
    }
        
    public int differenc()
    {
       int ESum = 0;
       int oSum = 0;

        for(int i = 0 ; i < Arr.length; i++ )
        {
            if(Arr[i] % 2 == 0)
            { 
               ESum = ESum + Arr[i];
            }
            else
            {
               oSum = oSum + Arr[i];
            }
        }
        return ESum - oSum; 
    }
}


public class Assignment32_1 
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the Size of Array You Want to create : ");
        int iSize = sobj.nextInt();

        ArrayDemo obj = new ArrayDemo(iSize);
        obj.Accept();
        obj.Display();

        int iAns = obj.differenc();

        System.out.println("Difference is : " + iAns);
    }    
}
