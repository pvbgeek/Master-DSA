using System;

class MainClass
{
    static int fibo(int num)
    {
        if(num<0)
        {return 0;}
        if(num == 0 || num == 1)
        {return num;}
        return fibo(num-1) + fibo(num-2);
    }

    static void Main()
    {
        int num = 6;
        int ans = fibo(num);
        Console.WriteLine(ans);
    }
}