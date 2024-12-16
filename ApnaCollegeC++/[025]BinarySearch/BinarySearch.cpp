#include <bits/stdc++.h>

using namespace std;

bool binsrch(vector<int> &arr , int key)
{
	int s = 0;
	int e = arr.size()-1;
	while(s<e)
	{
		int mid = s + (e-s)/2;
		if(arr[mid] == key){return true;}
		else if(arr[mid]<key)
		{s = mid+1;}
		else{e = mid-1;}
	}
	return false;
}

int main()
{
	vector<int> arr = {1,2,3,4,5,6,7,8,9};
	int key;
	cin>>key;
	if(binsrch(arr , key))
	{cout<<"True"<<endl;}
	else
	{cout<<"False"<<endl;}
}