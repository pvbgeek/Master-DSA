#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x , y , z;
	cin>>x>>y>>z;
	int ans = max(x , max(y,z));
	cout<<ans<<endl;
	return 0;
}