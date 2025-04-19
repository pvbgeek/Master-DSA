using System;

class MainClass
{
    static void Main()
    {
        Console.WriteLine("Enter the length of Array:");
        int len = int.Parse(Console.ReadLine()!);
        int[] arr = new int[len];
        for(int i=0; i<len; i++)
        {
            Console.WriteLine("Enter a number :");
            arr[i] = int.Parse(Console.ReadLine()!);
        }
        int l = int.MinValue;
        int s = int.MaxValue;
        int sl = int.MinValue;
        int ss = int.MaxValue;

        foreach(var x in arr)
        {
            if(x>l){l = x;}
        }
        foreach(var x in arr)
        {
            if(x<s){s = x;}
        }

        foreach(var x in arr)
        {
            if(x<l && x>sl){sl = x;}
        }

        foreach(var x in arr)
        {
            if(x>s && x<ss){ss = x;}
        }
        Console.WriteLine("Second-Smallest is : " + ss);
        Console.WriteLine("Second-Largest is : " + sl);
    }
}