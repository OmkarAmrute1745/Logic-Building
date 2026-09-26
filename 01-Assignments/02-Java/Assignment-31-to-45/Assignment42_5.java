/*
 * Q - Write a java program which accept two array from user and check whether that array its elements are palindrome or not
 * 
 *  Input  :  11  252 387783 252 11
 *  Output : True
 *  
 * Input  : 11  252 387783 77 11
 * Output : False
 * 
 */

import java.util.*;

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter "+Arr.length + " elements ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter the element no : "+ (iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of array are : ");

        for(int iCnt =0; iCnt < Arr.length; iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }

        System.out.println();
    }
}

class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);
    }
 
   public boolean CheckPalindrome()
   {
      int iStart = 0;
      int iEnd = Arr.length - 1;
      boolean bFlag = true;
      while(iStart < iEnd)
      {
        if(Arr[iStart] != Arr[iEnd])
        {
            bFlag = false;
        }
        iStart ++;
        iEnd --;
      }
      return bFlag;
   }
}

class Assignment42_5
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array that you want to create ");
        int iSize = sobj.nextInt();

       MyArray obj = new MyArray(iSize);
        
        obj.Accept();
        obj.Display();

       boolean bRet =  obj.CheckPalindrome();
        if(bRet == true)
        {
           System.out.println("Array is Palindrome ");
        } 
        else
        {
          System.out.println("Array is Not Palindrome ");
        }
    }
}

