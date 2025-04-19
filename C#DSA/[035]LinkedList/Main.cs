using System.Collections.Generic;

class MainClass
{
    static void Main()
    {
        LinkedList<int> ll = new LinkedList<int>();
        ll.AddFirst(1);
        ll.AddLast(2);
        ll.AddFirst(3);
        ll.AddLast(4);
        ll.AddFirst(5);
        foreach(var x in ll)
        {Console.Write(x + " ");}
        Console.WriteLine();
        Console.WriteLine(ll.Count);
        var node = ll.Find(4);
        if( node != null)
        {
            Console.WriteLine(node.Value);
        }
        else
        {
            Console.WriteLine("Not Found !!");
        }
        ll.Remove(3);
        foreach(var x in ll)
        {
            Console.Write(x + " ");
        }
        Console.WriteLine();
    }
}