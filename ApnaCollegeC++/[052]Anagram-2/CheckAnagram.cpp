#include<bits/stdc++.h>
using namespace std;


bool chkAnagram(string str1 , string str2)
{
    map<char , int> mp;
    for(auto x : str1)
    {
        mp[x]++;
    }
    for(auto x : str2)
    {
        mp[x]--;
    }
    for(auto p : mp)
    {
        if(p.second != 0){return false;}
    }
    return true;
}

int main()
{
    string str1 = "teacher";
    string str2 = "cheater";
    if(chkAnagram(str1 , str2))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}