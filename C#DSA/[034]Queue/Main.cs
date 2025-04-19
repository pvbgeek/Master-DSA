using System.Collections.Generic;

class MainClass
{
    static void Main()
    {
        Queue<int> myq = new Queue<int>();
        myq.Enqueue(1);
        myq.Enqueue(2);
        myq.Enqueue(3);
        Console.WriteLine(myq.Peek());
        Console.WriteLine(myq.Dequeue());
        Console.WriteLine(myq.Peek());
    }
}