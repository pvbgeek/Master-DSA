#include <iostream>
#include <cstring> // for strcmp, strcpy, strcat
using namespace std;

int main() {
    // strcmp example
    char str1[] = "apple";
    char str2[] = "banana";

    int result = strcmp(str1, str2); // compare strings
    if (result == 0)
        cout << "strcmp: Strings are equal" << endl;
    else if (result < 0)
        cout << "strcmp: str1 comes before str2" << endl;
    else
        cout << "strcmp: str1 comes after str2" << endl;

    // strcpy example
    char source[] = "hello";
    char destination[20];
    strcpy(destination, source);
    cout << "strcpy: destination = " << destination << endl;

    // strcat example
    char greet[50] = "Hello, ";
    char name[] = "Alice";
    strcat(greet, name);
    cout << "strcat: greet = " << greet << endl;

    return 0;
}