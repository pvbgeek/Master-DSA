#include <bits/stdc++.h>

using namespace std;

bool isPrime(int x)
{
	for(int i=2; i<=sqrt(x); i++)
	{
		if(x%i == 0){return false;}
	}
	return true;
}

void primesinrange(int num)
{
	for(int i=2; i<=num; i++)
	{
		if(isPrime(i))
		{cout<<i<<endl;}
	}
}

int main()
{
	int num;
	cin>>num;
	primesinrange(num);
}