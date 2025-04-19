using System;

class Vinayak
{
    public void VinayakMoney()
    {
        Console.WriteLine("Vinayak Money Access Granted !!");
    }
}

class Kaiwalya : Vinayak
{
    public  void KaiwalyaMoney()
    {
        Console.WriteLine("Kaiwalya Money Access Granted !!");
    }
}

class MainClass
{
    static void Main()
    {
        Vinayak v = new Vinayak();
        v.VinayakMoney();
        Kaiwalya k = new Kaiwalya();
        k.KaiwalyaMoney();
        k.VinayakMoney();
    }
}