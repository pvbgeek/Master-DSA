using System;

class MainClass
{
    static void TransposeMat(ref int[,] mat)
    {
        for(int i=0; i<mat.GetLength(0); i++)
        {
            for(int j=i+1; j<mat.GetLength(1); j++)
            {
                int temp = mat[i,j];
                mat[i,j] = mat[j,i];
                mat[j,i] = temp;
            }
        }
    }
    static void Main()
    {
        int[,] mat = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };
        Console.WriteLine("Before Transpose:");
        for(int i=0; i<mat.GetLength(0); i++)
        {
            for(int j=0; j<mat.GetLength(1); j++)
            {
                Console.Write(mat[i,j] + " ");
            }
            Console.WriteLine();
        }
        TransposeMat(ref mat);
        Console.WriteLine("After Transpose:");
        for(int i=0; i<mat.GetLength(0); i++)
        {
            for(int j=0; j<mat.GetLength(1); j++)
            {
                Console.Write(mat[i,j] + " ");
            }
            Console.WriteLine();
        }

    }
}