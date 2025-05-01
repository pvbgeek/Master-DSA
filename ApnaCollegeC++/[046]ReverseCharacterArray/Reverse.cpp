#include<bits/stdc++.h>
using namespace std;

void reverse(char arr[])
{
    int s = 0;
    int e = strlen(arr)-1;
    while(s<=e)
    {
        swap(arr[s] , arr[e]);
        s++; e--;
    }
}

int main()
{
    char arr[] = "abcdefghij";
    cout<<"Before Reversing : "<<arr<<endl;
    reverse(arr);
    cout<<"After Reversing : "<<arr<<endl;
}