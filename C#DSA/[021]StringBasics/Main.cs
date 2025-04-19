using System;

class MainClass
{
    static void Main()
    {
        string str = "abcdefghij";
        Console.WriteLine(str.Length);

        for(int i=0; i<str.Length; i++)
        {
            char curr = str[i];
            Console.Write(curr + " ");
        }
        Console.WriteLine();
        Console.WriteLine(str.ToUpper());
        Console.WriteLine(str.ToLower());
    }
}