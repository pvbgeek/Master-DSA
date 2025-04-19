    using System;

    class MainClass
    {
        static void Main()
        {
            Console.WriteLine("Enter number of Rows:");
            int rows = int.Parse(Console.ReadLine()!);
            Console.WriteLine("Enter number of Cols:");
            int cols = int.Parse(Console.ReadLine()!);
            int[,] mat = new int[rows,cols];

            for(int i=0; i<rows; i++)
            {
                for(int j=0; j<cols; j++)
                {
                    Console.WriteLine("Enter the number: ");
                    mat[i,j] = int.Parse(Console.ReadLine()!);
                }
            }
            Console.WriteLine("The Matrix is : ");
            for(int i=0; i<rows; i++)
            {
                for(int j=0; j<cols; j++)
                {
                    Console.Write(mat[i,j] + " ");
                }
                Console.WriteLine();
            }
        }
    }