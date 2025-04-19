#include<bits/stdc++.h>

using namespace std;

void printMat(vector<vector<int>>& mat)
{
    for(int i=0; i<mat.size(); i++)
    {
        for(int j=0; j<mat[0].size(); j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transposeMat(vector<vector<int>>& mat)
{
    for(int i=0; i<mat.size(); i++)
    {
        for(int j=i+1; j<mat[0].size(); j++)
        {
            swap(mat[i][j] , mat[j][i]);
        }
    }
}

int main()
{
    vector<vector<int>> mat = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout<<"Before Transpose :"<<endl;
    printMat(mat);
    transposeMat(mat);
    cout<<"After Transpose :"<<endl;
    printMat(mat);
}