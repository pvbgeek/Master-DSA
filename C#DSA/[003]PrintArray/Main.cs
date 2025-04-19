using System;

class MainClass
{
    static void Main()
    {
        Console.WriteLine("Enter the length of Array: ");
        int len = int.Parse(Console.ReadLine()!);
        int[] arr = new int[len];
        for(int i=0; i<len; i++)
        {
            Console.WriteLine("Enter a number : ");
            arr[i] = int.Parse(Console.ReadLine()!);
        }

        Console.WriteLine("Array Elements are as follows: ");
        foreach(var x in arr)
        {
            Console.Write(x + " ");
        }
        Console.WriteLine();
    }
}