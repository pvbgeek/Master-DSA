#include <bits/stdc++.h>

using namespace std;

int main()
{
	int num;
	cin>>num;
	int cntd=0; int cnte=0;
	while(num != 0)
	{
		int d = num%10;
		if(d%2 == 0){cnte++;}
		else{cntd++;}
		num/=10;
	}
	cout<<cnte<<endl;
	cout<<cntd<<endl;
}