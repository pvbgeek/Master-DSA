#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    cout<<"Enter length of string : ";
    cout<<endl;
    cin>>len;
    char* arr = new char[len];
    for(int i=0; i<len; i++)
    {
        cout<<"Enter a character : ";
        cout<<endl;
        cin>>arr[i];
    }
    for(int i=0; i<len; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    delete[] arr;
}