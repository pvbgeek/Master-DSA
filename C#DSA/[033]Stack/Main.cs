using System.Collections.Generic;

class MainClass
{
    static void Main()
    {
        Stack<int> st = new Stack<int>();
        st.Push(1);
        st.Push(2);
        st.Push(3);
        Console.WriteLine(st.Peek());
        Console.WriteLine(st.Pop());
        Console.WriteLine(st.Peek());
    }
}