#include <bits/stdc++.h>

using namespace std;

int main()
{
	int row , col;
	cin>>row>>col;
	vector<vector<int>> mat(row , vector<int>(col));
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cin>>mat[i][j];
		}
	}
	cout<<"Matrix is :"<<endl;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Diagonal Sum is : "<<endl;
	int sum = 0;
	int flag = 0;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			if(i == j || i+j == (col-1))
			{sum+=mat[i][j];}
		}
	}
	cout<<sum<<endl;
}