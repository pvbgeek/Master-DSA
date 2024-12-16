#include <bits/stdc++.h>

using namespace std;

void convert(int num)
{
	int ans = 0;
	int pow = 1;
	while(num != 0)
	{
		int d = num%10;
		ans+=(d*pow);
		pow*=2;
		num/=10;
	}
	cout<<ans<<endl;
}

int main()
{
	int num;
	cin>>num;
	convert(num);
}