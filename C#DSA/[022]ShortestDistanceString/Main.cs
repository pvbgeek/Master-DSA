using System;

class MainClass
{
    static double ShortestDistance(ref string str)
    {
        int x = 0;
        int y = 0;
        for(int i=0; i<str.Length; i++)
        {
            if(str[i] == 'E'){x++;}
            else if(str[i] == 'W'){x--;}
            else if(str[i] == 'N'){y++;}
            else{y--;}
        }
        double ans = Math.Sqrt((x*x) + (y*y));
        return ans;
    }
    static void Main()
    {
        string str = "NNEESEEWWESNWNESNEWSNNWSSE";
        Console.WriteLine(ShortestDistance(ref str));
    }
}