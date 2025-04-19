using System;

class MainClass
{
    static bool BinarySearch(ref int[] arr , ref int key)
    {
        int s = 0;
        int e = arr.Length-1;
        while(s<=e)
        {
            int m = s + (e-s)/2;
            if(arr[m] == key){return true;}
            if(arr[m] > key){e = m-1;}
            else{s = m+1;}
        }
        return false;
    }

    static void Main()
    {
        int[] arr = {1,2,3,4,5,6,7,8,9};
        Console.WriteLine("Enter a number you want to search:");
        int key = int.Parse(Console.ReadLine()!);
        Console.WriteLine(BinarySearch(ref arr , ref key));
    }
}