using System;

class MainClass
{
    static int MaxPairSum(ref int[] arr)
    {
        int maxsum = int.MinValue;
        for(int i=0; i<arr.Length; i++)
        {
            int sum = 0;
            for(int j=i+1; j<arr.Length; j++)
            {
                sum = arr[i] + arr[j];
                if(sum>maxsum){maxsum = sum;}
            }
        }
        return maxsum;
    }

    static void Main()
    {
        int[] arr = {1,2,3,4,5};
        Console.WriteLine("Maximum Pair Sum is : " + MaxPairSum(ref arr));
    }
}