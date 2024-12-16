#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = {1,2,-3,4,-2};
	int maxsum = INT_MIN;
	int currsum = 0;
	for(int x : arr)
	{
		currsum+=x;
		maxsum = max(maxsum , currsum);
		if(currsum<=0){currsum=0;}
	}
	cout<<maxsum<<endl;
}