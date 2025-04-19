using System;

class MainClass
{
    static void Main()
    {
        string str = "aaabbbbccddddeefg";
        string ans = "";
        for(int i=0; i<str.Length; i++)
        {
            char curr = str[i];
            int cnt = 0;
            while(i<str.Length && str[i] == curr)
            {
                cnt++;
                i++;
            }
            i--;
            ans = ans + curr.ToString() + cnt.ToString();
        }
        Console.WriteLine(ans);
    }
}