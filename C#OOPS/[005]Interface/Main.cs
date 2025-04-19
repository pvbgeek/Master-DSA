using System;

interface Money
{
    void Salary();
}

class Kaiwalya : Money
{
    public void Salary()
    {
        Console.WriteLine("Your Salary is : $10000000000");
    }
}

class Parth : Money
{
    public void Salary()
    {
        Console.WriteLine("Your Salary : $100000000000000");
    }
}

class MainClass
{
    static void Main()
    {
        Kaiwalya k = new Kaiwalya();
        Parth p = new Parth();
        p.Salary();
        k.Salary();
    }
}