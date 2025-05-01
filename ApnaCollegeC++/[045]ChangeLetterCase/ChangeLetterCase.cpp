#include<bits/stdc++.h>
using namespace std;

void upper(char arr[])
{
    int len = strlen(arr);
    for(int i=0; i<len; i++)
    {
        if(arr[i]>= 'a' && arr[i]<= 'z')
        {
            arr[i] = arr[i] - 32;
        }
    }
}

void lower(char arr[])
{
    int len = strlen(arr);
    for(int i=0; i<len; i++)
    {
        if(arr[i]>= 'A' && arr[i]<='Z')
        {
            arr[i] = arr[i] + 32;
        }
    }
}

int main()
{
    char arr1[] = "ApPLe";
    upper(arr1);
    cout<<"UpperCase : "<<arr1<<endl;
    char arr2[] = "ApPLe";
    lower(arr2);
    cout<<"LowerCase : "<<arr2<<endl;
}