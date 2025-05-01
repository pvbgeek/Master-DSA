#include<bits/stdc++.h>
using namespace std;

bool chkSwaps(string str1 , string str2)
{
    if(str1.length() != str2.length()){return false;}
    else
    {
        int len = str1.length();
        int cnt=0;
        int i1 = -1;
        int i2 = -1;
        for(int i=0; i<len; i++)
        {
            if(str1[i] != str2[i])
            {
                cnt++;
                if(i1 == -1)
                {i1 = i;}
                else if(i2 == -1)
                {i2 = i;}
                else{return false;}
            }
        }
        if(cnt == 0)
        {return true;}
        if(cnt == 2 && str1[i1] == str2[i2] && str1[i2] == str2[i1])
        {return true;}
        else{return false;}
    }
}

int main()
{
    string str1 = "bank";
    string str2 = "kanb";
    if(chkSwaps(str1 , str2))
    {cout<<"True"<<endl;}
    else{cout<<"False"<<endl;}
}