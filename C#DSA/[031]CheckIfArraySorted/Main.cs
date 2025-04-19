using System;

class MainClass
{
    static bool ChkSort(ref int[] arr , int i)
    {
        if( i == arr.Length)
        {return true;}
        if(arr[i]<arr[i-1]){return false;}
        else return ChkSort(ref arr , i+1);
    }

    static void Main()
    {
        int[] arr1 = {1,2,3,4,5,6,7,8,9};
        int[] arr2 = {1,2,3,5,4,6,8,7,9};
        Console.WriteLine(ChkSort(ref arr1 , 1));
        Console.WriteLine(ChkSort(ref arr2 , 1));
    }
}