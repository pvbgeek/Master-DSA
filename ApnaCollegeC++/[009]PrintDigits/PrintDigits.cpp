#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	cin>>num;
	while(num != 0)
	{
		int d = num%10;
		cout<<d<<" ";
		num=num/10;
	}
	cout<<endl;
}