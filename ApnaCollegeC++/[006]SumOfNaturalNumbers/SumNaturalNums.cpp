#include <bits/stdc++.h>

using namespace std;

int printnumoptimized(int num)
{
	return (num*(num+1))/2;
}

int printnumloop(int num)
{
	int sum = 0;
	for(int i=1; i<=num; i++)
	{
		sum+=i;
	}
	return sum;
}


int main()
{
	int num;
	cin>>num;
	cout<<printnumoptimized(num)<<endl;
	cout<<printnumloop(num)<<endl;
}