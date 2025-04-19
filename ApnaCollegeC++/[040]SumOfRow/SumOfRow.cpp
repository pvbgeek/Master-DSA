#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rk = 1;
    int sum = 0;
    for(int i=0; i<mat[0].size(); i++)
    {
        sum+=mat[rk][i];
    }
    cout<<"Sum is : "<<sum<<endl;
}