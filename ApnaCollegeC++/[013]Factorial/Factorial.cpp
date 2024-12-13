#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	cin>>num;
	long ans = 1;
	while(num>=1)
	{ans*=num; num--;}
	cout<<ans;
}