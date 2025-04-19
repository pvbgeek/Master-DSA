using System;
//using System.Linq;
class MainClass
{
    static void Main()
    {
        string str1 = "listen";
        string str2 = "silent";
        if(str1.Length != str2.Length)
        {Console.WriteLine("false");}
        else
        {
            char[] temp1 = str1.ToCharArray();
            char[] temp2 = str2.ToCharArray();

            Array.Sort(temp1);
            Array.Sort(temp2);

            // if(temp1.SequenceEqual(temp2))
            // {Console.WriteLine("True");}
            // else
            // {Console.WriteLine("False");}

            bool ans = true;
            int len = str1.Length;

            for(int i=0; i<len; i++)
            {
                if(temp1[i] != temp2[i])
                {ans = false; break;}
            }

            Console.WriteLine(ans);
        }

    }
}