using System;

class Person
{
    public string name = "";

    public void greet()
    {
        Console.WriteLine("Hello " + name + " Welcome !!");
    }
}

class MainClass
{
    static void Main()
    {
        Person p1 = new Person();
        p1.name = "Parth";
        p1.greet();
    }
}