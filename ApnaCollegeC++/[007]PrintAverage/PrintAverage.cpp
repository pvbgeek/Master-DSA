#include <bits/stdc++.h>

using namespace std;

int main()
{
	int len;
	cin>>len;
	vector<int> arr(len);
	for(int i=0; i<len; i++)
	{cin>>arr[i];}
	int sum = 0;
	for(int i=0; i<len; i++)
	{
		sum+=arr[i];
	}
	float avg = sum/(len*1.0);
	cout<<avg<<endl;
}