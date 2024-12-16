#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = {1,2,-3,4,-2};
	int maxsum = INT_MIN;
	for(int i=0; i<arr.size(); i++)
	{
		int currsum = 0;
		for(int j=i; j<arr.size(); j++)
		{
			currsum+=arr[j];
			maxsum = max(maxsum , currsum);
		}
	}
	cout<<maxsum;
}