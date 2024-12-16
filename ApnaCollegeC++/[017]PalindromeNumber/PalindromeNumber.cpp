#include <bits/stdc++.h>

using namespace std;

bool palindromenum(int num)
{
	int rev = 0;
	int temp = num;
	while(temp != 0)
	{
		int d = temp%10;
		rev = rev*10 + d;
		temp = temp/10;
	}
	if(num == rev){return true;}
	else{return false;}
}

int main()
{
	int num;
	cin>>num;
	cout<<palindromenum(num)<<endl;
}