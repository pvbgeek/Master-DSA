using System;

class MainClass
{
    static void PrintSubArrays(ref int[] arr)
    {
        for(int i=0; i<arr.Length; i++)
        {
            for(int j=i; j<arr.Length; j++)
            {
                for(int k=i; k<=j ; k++)
                {
                    Console.Write(arr[k] + " ");
                }
                Console.WriteLine();
            }
            Console.WriteLine();
        }
    }
    static void Main()
    {
        int[] arr = {1,2,3,4,5,6,7,8,9};
        PrintSubArrays(ref arr);
    }
}