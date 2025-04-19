class Solution {
    public:
        void transpose(vector<vector<int>>& mat)
        {
            for(int i=0; i<mat.size(); i++)
            {
                for(int j=i+1; j<mat[0].size(); j++)
                {
                    swap(mat[i][j] , mat[j][i]);
                }
            }
        }
    
        void reverserows(vector<vector<int>>& mat)
        {
            for(int i=0; i<mat.size(); i++)
            {
                reverse(mat[i].begin() , mat[i].end());
            }
        }
    
        void rotate(vector<vector<int>>& matrix) 
        {
            transpose(matrix);
            reverserows(matrix);
        }
    };