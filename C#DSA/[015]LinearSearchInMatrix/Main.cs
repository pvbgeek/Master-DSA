using System;

class MainClass
{
    static bool LinearSrchMat(ref int[,] mat , ref int key)
    {
        for(int i=0; i<mat.GetLength(0); i++)
        {
            for(int j=0; j<mat.GetLength(1); j++)
            {
                if(mat[i,j] == key){return true;}
            }
        }
        return false;
    }

    static void Main()
    {
        int rows = 3;
        int cols = 3;
        int[,] mat = new int[rows,cols];
        for(int i=0; i<rows; i++)
        {
            for(int j=0; j<cols; j++)
            {
                Console.WriteLine("Enter a number:");
                mat[i,j] = int.Parse(Console.ReadLine()!);
            }
        }
        Console.WriteLine("Enter the element you want to search?");
        int key = int.Parse(Console.ReadLine()!);
        Console.WriteLine(LinearSrchMat(ref mat , ref key));
    }
}