using System;

class MainClass
{
    static void PrintPairs(ref int[] arr)
    {
        for(int i=0; i<arr.Length; i++)
        {
            for(int j = i+1; j<arr.Length; j++)
            {
                Console.Write("(" + arr[i] + "," + arr[j] + ")" + " ");
            }
            Console.WriteLine();
        }
    }

    static void Main()
    {
        int[] arr = {1,2,3,4,5};
        PrintPairs(ref arr);
    }
}