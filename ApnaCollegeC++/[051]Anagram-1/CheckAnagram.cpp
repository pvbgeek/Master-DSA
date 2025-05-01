#include<bits/stdc++.h>
using namespace std;

bool chkAnagram(string str1 , string str2)
{
    sort(str1.begin() , str1.end());
    sort(str2.begin() , str2.end());
    if(str1 == str2){return true;}
    else{return false;}
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