#include <bits/stdc++.h>

using namespace std;

bool containsdup(vector<int> &arr)
{
	map<int , int> mp;
	for(auto x : arr)
	{
		if(mp[x] == 1){return true;}
		else{mp[x]=1;}
	}
	return false;
}

int main()
{
	vector<int> arr1 = {1,2,3,4,5};
	vector<int> arr2 = {1,2,3,3,4};
	if(containsdup(arr1))
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
	
	if(containsdup(arr2))
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
}