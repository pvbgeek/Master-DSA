using System;

class Person
{
    private string name;
    private int age;

    public Person(string name)
    {this.name = name;}
    public Person(string name , int age)
    {
        this.name = name;
        this.age = age;
    }
    public void DisplayName()
    {
        Console.WriteLine("Name is : " + name + ".");
    }
    public void DisplayAll()
    {
        Console.WriteLine("Name is  : " + name + ".");
        Console.WriteLine("Age is : " + age + ".");
    }
}

class MainClass
{
    static void Main()
    {
        Person p1 = new Person("Parth");
        Person p2 = new Person("Kaiwalya" , 23);
        p1.DisplayName();
        p2.DisplayAll();
    }
}