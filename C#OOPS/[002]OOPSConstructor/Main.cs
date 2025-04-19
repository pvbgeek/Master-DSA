using System;

class Person
{
    private string name;
    public Person(string name)
    {this.name = name;}

    public void SetName(string newName)
    {
        name = newName;
        Console.WriteLine("Name Updated to : " + name);
    }
    
    public string GetName()
     {
        return name;
     }

     public void Greet()
     {
        Console.WriteLine("Hello " + name + " Welcome !!");
     }
}

class MainClass
{
    static void Main()
    {
        Person p1 = new Person("Parth");
        p1.Greet();
        Console.WriteLine(p1.GetName());
        p1.SetName("Kaiwalya");
        p1.Greet();
        Console.WriteLine(p1.GetName());
    }
}