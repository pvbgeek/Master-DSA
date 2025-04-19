using System;

class MainClass
{
    static int SumOfDiagonals(ref int[,] mat)
    {
        int n = mat.GetLength(0);
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum += mat[i,i];
            sum+= mat[i , n-i-1];
        }
        if(n%2 == 1)
        {sum -= mat[n/2 , n/2];}
        return sum;
    }

    static void Main()
    {
        int[,] mat = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };

        Console.WriteLine(SumOfDiagonals(ref mat));
    }
}