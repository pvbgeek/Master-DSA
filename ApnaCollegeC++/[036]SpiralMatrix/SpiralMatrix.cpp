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
        
        cout<<"Spiral Matrix is :"<<endl;
        int top = 0, bottom = row - 1, left = 0, right = col - 1;

	    // Iterate until all elements are printed
	    while (top <= bottom && left <= right) {
	
	        // Print top row from left to right
	        for (int i = left; i <= right; ++i) {
	            cout<<mat[top][i]<<" ";
	        }
	        cout<<endl;
	        top++;
	
	        // Print right column from top to bottom
	        for (int i = top; i <= bottom; ++i) {
	            cout<<mat[i][right]<<" ";
	        }
	        cout<<endl;
	        right--;
	
	        // Print bottom row from right to left (if exists)
	        if (top <= bottom) {
	            for (int i = right; i >= left; --i) {
	                cout<<mat[bottom][i]<<" ";
	            }
	            cout<<endl;
	            bottom--;
	        }
	
	        // Print left column from bottom to top (if exists)
	        if (left <= right) {
	            for (int i = bottom; i >= top; --i) {
	                cout<<mat[i][left]<<" ";
	            }
	            cout<<endl;
	            left++;
	        }
	    }
        
}