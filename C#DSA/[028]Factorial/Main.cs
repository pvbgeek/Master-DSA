using System;

class MainClass
{
    static long factorial(int num)
    {
        if(num == 0)
        {return 1;}
        return num * factorial(num-1);
    }
    static void Main()
    {
        int num = 5;
        long ans = factorial(num);
        Console.WriteLine(ans);
    }
}