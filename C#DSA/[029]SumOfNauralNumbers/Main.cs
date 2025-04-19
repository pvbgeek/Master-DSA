using System;

class MainClass
{
    static int sumofnums(int num)
    {
        if(num == 1)
        {return 1;}
        return num + sumofnums(num-1);
    }
    static void Main()
    {
        int num = 5;
        int ans = sumofnums(num);
        Console.WriteLine(ans);
    }
}