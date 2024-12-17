#include <bits/stdc++.h>

using namespace std;

bool rotsrch(vector<int> &arr , int key)
{
	int s = 0;
	int e = arr.size()-1;
	while(s<=e)
	{
		int m = s+(e-s)/2;
		if(arr[m] == key)
		{return true;}
		
		if(arr[s]<=arr[m])
		{
			if(arr[s]<=key && key<arr[m])
			{e = m-1;}
			else
			{s = m+1;}
		}
		else
		{
			if(arr[m]<key && key<=arr[e])
			{s=m+1;}
			else
			{e = m-1;}
		}
	}
	
	return false;
}

int main()
{
	vector<int> arr = {4,5,6,7,0,1,2};
	int key;
	cin>>key;
	if(rotsrch(arr , key))
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
}