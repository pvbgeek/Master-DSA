using System.Collections.Generic;


class MainClass
{
    static void Main()
    {
        List<int> arr = new List<int>();
        for(int i=1; i<=9; i++)
        {arr.Add(i);}
        foreach(var x in arr)
        {Console.Write(x + " ");}
        Console.WriteLine();

        Console.WriteLine(arr.Count);
        arr.Remove(5);
        arr.Remove(7);

        foreach(var x in arr)
        {Console.Write(x + " ");}
        Console.WriteLine();
    }
}