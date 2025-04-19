#include<bits/stdc++.h>

using namespace std;

bool rotsrch(vector<vector<int>>& mat , int key)
{
    int r = 0;
    int c = mat[0].size()-1;
    while(r<mat[0].size() && c>=0)
    {
        if(mat[r][c] == key){return true;}
        else if(mat[r][c]<key){r++;}
        else{c--;}
    }

    return false;
}


int main()
{
    int row , col;
    cout<<"Enter Row and Col Dimensions :"<<endl;
    cin>>row>>col;
    vector<vector<int>> mat(row , vector<int>(col));
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<"Enter a number : ";
            cin>>mat[i][j];
            cout<<endl;
        }
    }
    int key;
    cout<<"Enter the number you want to search ?"<<endl;
    cin>>key;
    if(rotsrch(mat , key))
    {cout<<"TRUE"<<endl;}
    else
    {cout<<"FALSE"<<endl;}
}