#include <bits/stdc++.h>

using namespace std;

void printnxtchar(char ch)
{
	if(ch == 'z'){cout<<"a"<<endl;}
	else{cout<<char(ch+1)<<endl;}
}

int main()
{
	char ch;
	cin>>ch;
	printnxtchar(ch);
}