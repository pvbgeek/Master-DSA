#include<bits/stdc++.h>
using namespace std;

int main() 
{
    string text = "Hello, World!";

    // length() or size()
    cout << "Length of string: " << text.length() << endl;

    // at(index)
    cout << "Character at index 7: " << text.at(7) << endl;

    // substr(start, length)
    string sub = text.substr(7, 5); // "World"
    cout << "Substring from index 7 of length 5: " << sub << endl;

    // find(substring)
    size_t pos = text.find("World");
    if (pos != string::npos)
        cout << "\"World\" found at position: " << pos << endl;
    else
        cout << "\"World\" not found!" << endl;

    return 0;
}