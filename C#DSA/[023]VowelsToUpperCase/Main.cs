using System;

class MainClass
{
    static void Main()
    {
        string str = "abcdefghijklmnopqrtstuwxyz";
        string ans = "";
        for(int i=0; i<str.Length; i++)
        {
            string curr = str[i].ToString();
            if(curr == "a" || curr == "e" || curr == "i" || curr == "o" || curr == "u")
            {
                curr = curr.ToUpper();
                ans += curr;
            }
            else
            {
                ans += str[i].ToString();
            }
        }
        Console.WriteLine(ans);
    }
}