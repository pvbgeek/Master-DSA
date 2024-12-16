#include <bits/stdc++.h>

using namespace std;

long factorial(int x)
{
	if(x == 0){return 1;}
	long ans = 1;
	while(x>0)
	{
		ans*=x;
		x--;
	}
	return ans;
}

int main()
{
	int n;
	int r;
	cin>>n>>r;
	long nfac = factorial(n);
	long rfac = factorial(r);
	long dfac = factorial(n-r);
	long ans = nfac / (rfac * dfac);
	cout<<ans<<endl;
}