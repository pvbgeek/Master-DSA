using System;
using System.Text;

class MainClass
{
    static void Main()
    {
        Console.WriteLine("Enter your First name:");
        string fname = Console.ReadLine()!;
        Console.WriteLine("Enter your Last name:");
        string lname = Console.ReadLine()!;
        string fullname = fname + " " + lname;
        Console.WriteLine("Your Full Name is : " + fullname);

        StringBuilder fnamesb = new StringBuilder();
        StringBuilder lnamesb = new StringBuilder();
        Console.WriteLine("Enter your First Name: ");
        fnamesb.Append(Console.ReadLine()!);
        Console.WriteLine("Enter your Last Name : ");
        lnamesb.Append(Console.ReadLine()!);
        StringBuilder fullnamesb = new StringBuilder();
        fullnamesb.Append(fnamesb);
        fullnamesb.Append(" ");
        fullnamesb.Append(lnamesb);
        Console.WriteLine("Your Full Name is : " + fullnamesb);
    }
}