class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
    vector<vector<int>> v(n, vector<int>(n, 0));    int r1,r2,c1,c2;
        for(auto q:queries){
            r1=q[0],c1=q[1],c2=q[3],r2=q[2];
            for(int i=r1;i<=r2;i++){
                v[i][c1]++;
                if(c2+1<n)v[i][c2+1]--;
            }
        }
        for(int i=0;i<n;i++)for(int j=1;j<n;j++)v[i][j]+=v[i][j-1];
        return v;
    }
};