class Solution {
public:

    vector<vector<char>> fun(vector<vector<char>>& matrix){

        int n = matrix.size(),m = matrix[0].size();

        vector<vector<char>> ans(m, vector<char>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans[j][n - 1 - i] = matrix[i][j];
            }
        }

        return ans;
    }

    vector<vector<char>> rotateTheBox(vector<vector<char>>& mat) {

        int n = mat.size(),m = mat[0].size();

        for(int i = 0; i < n; i++) {

            int l = -1;

            for(int j = 0; j < m; j++) {

                if(mat[i][j] == '#') {

                    if(l == -1)
                        l = j;
                }

                else if(mat[i][j] == '.') {

                    if(l != -1) {

                        swap(mat[i][j], mat[i][l]);

                        l++;
                    }
                }

                else { // '*'

                    l = -1;
                }
            }
        }

        return fun(mat);
    }
};