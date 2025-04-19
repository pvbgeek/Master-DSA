using System;

class MainClass
{
    static int MaxSumSubArray(ref int[] arr)
    {
        int currsum = 0;
        int maxsum = 0;
        for(int i=0; i<arr.Length; i++)
        {
            currsum += arr[i];
            if(currsum<0){currsum = 0;}
            if(currsum>maxsum){maxsum = currsum;}
        }
        return maxsum;
    }
    static void Main()
    {
        int[] arr = {1,2,-1,3,-2};
        Console.WriteLine(MaxSumSubArray(ref arr));
    }
}