#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	cin>>a;
	cout<<a<<endl;
	cout<<&a<<endl;
	int *ptr = &a;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
}