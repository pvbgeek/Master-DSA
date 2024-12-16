#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = {1,3,2,4,5};
	int maxprofit = INT_MIN;
	int currmin = INT_MAX;
	for(int i=0; i<arr.size(); i++)
	{
		int profit = arr[i] - currmin;
		if(profit>maxprofit){maxprofit = profit;}
		if(arr[i]<currmin){currmin = arr[i];}
	}
	cout<<maxprofit<<endl;
}