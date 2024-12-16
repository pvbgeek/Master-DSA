#include <bits/stdc++.h>

using namespace std;

void reversearr(vector<int> &arr)
{
	int s = 0;
	int e = arr.size()-1;
	while(s<e)
	{
		swap(arr[s] , arr[e]);
		s++; e--;
	}
}

int main()
{
	vector<int> arr = {1,2,3,4,5};
	for(auto x : arr)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	reversearr(arr);
	for(auto x : arr)
	{
		cout<<x<<" ";
	}
	cout<<endl;
}