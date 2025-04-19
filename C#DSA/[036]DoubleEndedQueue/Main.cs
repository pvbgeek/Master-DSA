using System.Collections.Generic;

class MainClass
{
    static void Main()
    {
        LinkedList<int> dq = new LinkedList<int>();

        // Add to both ends
        dq.AddFirst(10);
        dq.AddLast(20);
        dq.AddFirst(5);
        dq.AddLast(25);

        foreach (var x in dq)
        {
            Console.Write(x + " ");
        }
        Console.WriteLine();

        // Access front and back
        if(dq.First != null)
        {Console.WriteLine("Front: " + dq.First.Value);}
        if(dq.Last != null)
        {Console.WriteLine("Back: " + dq.Last.Value);}

        // Remove from both ends
        dq.RemoveFirst();
        dq.RemoveLast();

        foreach (var x in dq)
        {
            Console.Write(x + " ");
        }
        Console.WriteLine();
    }
}