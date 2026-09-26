// template ll in java

// Singly Linked List in java implementation
// count and head becomes private (Add CountNode method)


import java.util.*;

class Node
{
    public int Data;
    public Node Next;

    public Node(int No)
    {
        this.Data = No;
        this.Next = null;
    }
}

class SinglyLL
{
    private Node Head;
    private int Count;

    public SinglyLL()
    {
        Head = null;
        Count = 0;
    }

    protected void finalize()
    {
         // Memory free
    }

    public void InsertFirst(int No)
    {
        Node newn = new Node(No); //newn.Data = No; newn.Next = null;
        
        if(this.Head == null)
        {
            this.Head = newn;
        }
        else
        {
           newn.Next = this.Head;
           this.Head = newn;
        }
        this.Count++;

    }

    public void Display()
    {
        Node temp = Head;

        while(temp!= null)
        {
            System.out.print("| " + temp.Data + " |->");
            temp = temp.Next;
        }
        System.out.println("Null");
    }

    public int CountNodes()
    {
        return this.Count;
    }
}

public class Program447
{
   public static void main(String arg[])    
   {
       SinglyLL obj = new SinglyLL();

       obj.InsertFirst(51);
       obj.InsertFirst(21);
       obj.InsertFirst(11);

       obj.Display();

       int ret = obj.CountNodes();
       System.out.println("Number of Node Are : " + ret);
   }
}
