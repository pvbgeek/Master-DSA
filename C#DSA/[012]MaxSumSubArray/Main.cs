using System;

class MainClass
{
    static int MaxSumSubArray(ref int[] arr)
    {
        int maxsum = int.MinValue;
        for(int i=0; i<arr.Length; i++)
        {
            for(int j = i; j<arr.Length; j++)
            {
                int sum = 0;
                for(int k=i; k<=j; k++)
                {
                    sum+=arr[k];
                }
                if(maxsum<sum){maxsum = sum;}
            }
        }
        return maxsum;
    }
    static void Main()
    {
        int[] arr = {1,2,3,4,5};
        Console.WriteLine(MaxSumSubArray(ref arr));
    }
}