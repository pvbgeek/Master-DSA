#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(char arr[])
{
    int s = 0;
    int e = strlen(arr)-1;
    while(s<e)
    {
        if(arr[s] != arr[e])
        {return false;}
        s++; e--;
    }
    return true;
}

int main()
{
    char arr1[] = "racecar";
    char arr2[] = "plaindromep";
    if(isPalindrome(arr1))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    if(isPalindrome(arr2))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
}