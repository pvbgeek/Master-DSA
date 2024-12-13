#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, y, ch;
    cin >> x >> y >> ch;

    switch (ch) {
        case 1:
            cout << x + y << endl;
            break;
        case 2:
            cout << x - y << endl;
            break;
        case 3:
            cout << x * y << endl;
            break;
        case 4:
            if (y != 0) {
                cout << x / y << endl;
            } else {
                cout << "Division by zero error" << endl;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}