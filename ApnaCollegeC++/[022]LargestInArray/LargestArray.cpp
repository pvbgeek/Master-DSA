#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = {1,2,3,4,5};
	int ans = INT_MIN;
	for(int x : arr)
	{if(ans<x){ans = x;}}
	cout<<ans<<endl;
}