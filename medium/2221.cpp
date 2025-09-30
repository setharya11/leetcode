class Solution {
public:
    int triangularSum(vector<int>& v) {
        int n=v.size();
        for(int i=0;i<n-1;i++){
            for(int j=1;j<n-i;j++)  v[j-1]=(v[j-1]+v[j])%10;
        }
        return v[0];
    }
};