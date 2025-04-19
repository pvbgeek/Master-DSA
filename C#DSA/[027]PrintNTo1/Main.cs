using System;

class MainClass
{
    static void printnums(int num)
    {
        if(num == 0)
        {return;}
        Console.Write(num + " ");
        printnums(num-1);
    }

    static void Main()
    {
        int num = 9;
        printnums(num);
        Console.WriteLine();
    }
}