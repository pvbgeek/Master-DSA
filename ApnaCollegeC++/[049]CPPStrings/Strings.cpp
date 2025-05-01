#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcdefghij";
    cout<<str<<endl;
    cout<<str.length()<<endl;
    for(auto x : str)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<str[2]<<endl;
    reverse(str.begin() , str.end());
    cout<<str<<endl;
}