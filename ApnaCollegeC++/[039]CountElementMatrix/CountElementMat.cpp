#include<bits/stdc++.h>

using namespace std;

int CountElement(vector<vector<int>>& mat , int key)
{
    int cnt = 0;
    for(int i=0; i<mat.size(); i++)
    {
        for(int j=0; j<mat[0].size(); j++)
        {
            if(mat[i][j] == key){cnt++;}
        }
    }
    return cnt;
}

int main()
{
    int r = 3;
    int c = 3;
    vector<vector<int>> mat(r , vector<int>(c));
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<"Enter a number:";
            cin>>mat[i][j];
        }
    }
    int key;
    cout<<"Enter key element to count:";
    cin>>key;
    cout<<endl;

    cout<<"Number "<<key<<" appears "<<CountElement(mat , key)<<" times."<<endl;

}