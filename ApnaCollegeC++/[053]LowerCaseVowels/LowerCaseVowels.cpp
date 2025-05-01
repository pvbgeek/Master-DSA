#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "aAeEiIoOuU";
    int cnt = 0;
    for(auto x : str)
    {
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        {cnt++;}
    }
    cout<<"Count of Lower Case Vowels : "<<cnt<<endl;
}