#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = {1,2,-3,4,-2};
	int maxsum = INT_MIN;
	for(int i=0; i<arr.size(); i++)
	{
		for(int j=i; j<arr.size(); j++)
		{
			int sum = 0;
			for(int k=i; k<=j; k++)
			{
				sum+=arr[k];
			}
			maxsum = max(maxsum , sum);
		}
	}
	cout<<maxsum<<endl;
}