using System;

class MainClass
{
    static void Main()
    {
        Console.WriteLine("Enter three numbers");
        int x = int.Parse(Console.ReadLine()!);
        int y = int.Parse(Console.ReadLine()!);
        int z = int.Parse(Console.ReadLine()!);

        if(x<y && x<z)
        {
            Console.WriteLine(x + " is the smallest");
        }
        else if(y<x && y<z)
        {
            Console.WriteLine(y + " is the smallest");
        }
        else
        {
            Console.WriteLine(z + " is the smallest");
        }
    }
}