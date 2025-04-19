using System;

class MainClass
{
    static void printnums(int num)
    {
        if(num == 0)
        {return;}
        printnums(num-1);
        Console.Write(num + " ");
    }
    static void Main()
    {
        int num = 9;
        printnums(num);
        Console.WriteLine();
    }
}