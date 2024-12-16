#include <bits/stdc++.h>

using namespace std;

int fibo(int num)
{
	int a=0;
	int b=1;
	
	if(num == 0){return a;}
	else if(num == 1){return b;}
	else
	{
		int c = 0;
		for(int i=2; i<=num; i++)
		{
			c = a+b;
			a = b;
			b = c;
		}
		return c;
	}
}

int main()
{
	int num;
	cin>>num;
	cout<<fibo(num)<<endl;
}