using System;

class MainClass
{

    static bool SortedSearchMat(ref int[,] mat , ref int key)
    {
        int r = 0;
        int c = mat.GetLength(1)-1;

        while(r<mat.GetLength(0) && c>=0)
        {
            if(mat[r,c] == key){return true;}
            if(mat[r,c]>key){c--;}
            else{r++;}
        }
        return false;
    }

    static void Main()
    {
        int[,] mat = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        };

        Console.WriteLine("Enter the number you want to search ?");
        int key = int.Parse(Console.ReadLine()!);

        Console.WriteLine(SortedSearchMat(ref mat , ref key));

    }
}