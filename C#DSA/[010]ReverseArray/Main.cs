using System;

class MainClass
{
    static void ReverseArray(ref int[] arr)
    {
        int s = 0;
        int e = arr.Length - 1;

        while(s<=e)
        {
            int temp = arr[s];
            arr[s] = arr[e];
            arr[e] = temp;
            s++; e--;
        }
    }

    static void Main()
    {
        int[] arr = {1,2,3,4,5,6,7,8,9};
        Console.WriteLine("Before Reversing");
        foreach(var x in arr)
        {
            Console.Write(x + " ");
        }
        Console.WriteLine();
        ReverseArray(ref arr);
        Console.WriteLine("After Reversing");
        foreach(var x in arr)
        {
            Console.Write(x + " ");
        }
        Console.WriteLine();
    }
}