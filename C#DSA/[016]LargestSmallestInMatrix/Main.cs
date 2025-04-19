using System;

class MainClass
{
    static int LargestMatrix(ref int[,] mat)
    {
        int ans = int.MinValue;
        for(int i=0; i<mat.GetLength(0); i++)
        {
            for(int j=0; j<mat.GetLength(1); j++)
            {
                if(mat[i,j]>ans){ans = mat[i,j];}
            }
        }
        return ans;
    }

    static int SmallestMatrix(ref int[,] mat)
    {
        int ans = int.MaxValue;
        for(int i=0; i<mat.GetLength(0); i++)
        {
            for(int j=0; j<mat.GetLength(1); j++)
            {
                if(mat[i,j]<ans){ans = mat[i,j];}
            }
        }
        return ans;
    }

    static void Main()
    {
        int[,] mat = {
                {1,2,3},
                {4,5,6},
                {7,8,9}
        };
        Console.WriteLine(LargestMatrix(ref mat));
        Console.WriteLine(SmallestMatrix(ref mat));
    }
}