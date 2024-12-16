#include <bits/stdc++.h>

using namespace std;

void convert(int num)
{
	string ans = "";
	if(num == 0){ans = "0";}
	while(num != 0)
	{
		ans+= '0' + (num%2);
		num = num/2;
	}
	int s = 0;
	int e = ans.size()-1;
	while(s<=e)
	{
		swap(ans[s],ans[e]);
		s++; e--;
	}
	cout<<ans<<endl;
}

int main()
{
	int num;
	cin>>num;
	convert(num);
}