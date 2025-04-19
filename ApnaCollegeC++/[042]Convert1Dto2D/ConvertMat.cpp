class Solution 
{
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) 
    {
        if(original.size() != m*n)
        {return {};}
        vector<vector<int>> ans(m , vector<int>(n));
        int i=0;
        int k=0;
        while(i<original.size())
        {
            for(int j=0; j<n; j++)
            {ans[k][j] = original[i];i++;}
            k++;
        }
        return ans;
    }
};