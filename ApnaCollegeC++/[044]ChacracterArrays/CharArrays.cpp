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

    char input[100];
    cout<<"Enter a input string : ";
    cout<<endl;
    cin.getline(input , 100 , '#');
    cout<<input<<endl;
    cout<<"Enter a input string : ";
    cout<<endl;
    cin.getline(input , 100 , '#');
    cout<<input<<endl;

    delete[] arr;
}