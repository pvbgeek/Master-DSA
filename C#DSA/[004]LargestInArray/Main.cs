using System;

public class MainClass()
{
    static void Main()
    {
        Console.WriteLine("Enter the length of Array: ");
        int len = int.Parse(Console.ReadLine()!);
        int[] arr = new int[len];

        for(int i=0; i<len; i++)
        {
            Console.WriteLine("Emter a number: ");
            arr[i] = int.Parse(Console.ReadLine()!);
        }
        int ans = int.MinValue;
        foreach(var x in arr)
        {
            if(x>ans){ans = x;}
        }
        Console.WriteLine("The Answer is : " + ans);
    }
}