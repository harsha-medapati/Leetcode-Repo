class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0,m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(mat[i][j] == 1) {
                    bool flag = true;
                    for(int col=0;col<n;col++) {
                        if(col != j && mat[i][col] == 1) {
                            flag = false;
                            break;
                        }
                    }
                    if(flag) {
                        for(int row=0;row<m;row++) {
                            if(row != i && mat[row][j] == 1) {
                                flag = false;
                                break;
                            }
                        }
                    }
                    if(flag) ans++;
                }
            }
        }
        return ans;
    }
};