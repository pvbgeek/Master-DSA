#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = {1,2,3,4,5};
	for(int i=0; i<arr.size(); i++)
	{
		for(int j=i; j<arr.size(); j++)
		{
			for(int k=i; k<=j; k++)
			{
				cout<<arr[k]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}