#include <bits/stdc++.h>

using namespace std;

bool lnrsrch(vector<int> &arr , int key)
{
	for(auto x : arr)
	{
		if(x == key){return true;}
	}
	return false;
}

int main()
{
	vector<int> arr = {3,1,2,6,5,4,9,7,8};
	int key;
	cin>>key;
	if(lnrsrch(arr , key))
	{cout<<"True"<<endl;}
	else{cout<<"False"<<endl;}
}