using System;

class MainClass
{
    static void Main()
    {
        Console.WriteLine("Enter Three Numbers");
        int x = int.Parse(Console.ReadLine()!);
        int y = int.Parse(Console.ReadLine()!);
        int z = int.Parse(Console.ReadLine()!);
        if(x > y && x > z)
        {
            Console.WriteLine(x + " is the largest number");
        }
        else if(y>x && y>z)
        {
            Console.WriteLine(y + " is the largest number");
        }
        else
        {
            Console.WriteLine(z + " is the largest number");
        }
    }
}