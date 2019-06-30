class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> mxr(n,0), mxc(n,0);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++){
                mxr[i] = max(mxr[i],grid[i][j]);
                mxc[j] = max(mxc[j],grid[i][j]);
            }
        }
        int sum=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++){
                sum += (min(mxr[i],mxc[j])-grid[i][j]);
            }
        }
        return sum;
    }
};
