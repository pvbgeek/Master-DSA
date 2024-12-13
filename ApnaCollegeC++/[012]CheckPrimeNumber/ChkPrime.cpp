#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	cin>>num;
	int flag = 0;
	for(int i=2; i<=sqrt(num); i++)
	{
		if(num%i == 0){cout<<"False"; flag = 1; break;}
	}
	if(flag == 0)
	{cout<<"True"<<endl;}
	return 0;
}