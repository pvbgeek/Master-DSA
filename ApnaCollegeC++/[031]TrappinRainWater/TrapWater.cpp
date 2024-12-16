#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> arr = {4,2,0,3,2,5};
	vector<int> left(arr.size() , 0);
	vector<int> right(arr.size() , 0);
	int maxleft = INT_MIN;
	int maxright = INT_MIN; 
	int s = 0;
	int e = arr.size()-1;
	while(s<=e)
	{
		int currleft=arr[s];
		maxleft = max(maxleft , currleft);
		left[s] = maxleft;
		s++;
	}
	while(e>=0)
	{
		int currright = arr[e];
		maxright = max(maxright , currright);
		right[e] = maxright;
		e--;
	}
	
	int water = 0;
	for(int i=0; i<arr.size(); i++)
	{
		if(arr[i]<min(left[i],right[i]))
		{water+=(min(left[i],right[i]) - arr[i]);}
	}
	cout<<water<<endl;
}