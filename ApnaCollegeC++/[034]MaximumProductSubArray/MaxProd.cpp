#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = {-2, 6, -3, -10, 0, 2};
	int currmax = arr[0];
	int currmin = arr[0];
	int maxprod = arr[0];
	for(int i=1; i<arr.size(); i++)
	{
		int temp = max({arr[i],arr[i]*currmax,arr[i]*currmin});
		currmin = min({arr[i],arr[i]*currmax,arr[i]*currmin});
		currmax = temp;
		
		maxprod = max(maxprod , currmax);
	}	
	cout<<maxprod<<endl;
}