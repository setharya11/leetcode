class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int largest=*max_element(begin(nums),end(nums))+k;
        vector<int>v(largest+1,0);
        for(int a:nums)  v[a]++;
        for(int i=1;i<=largest;i++)   v[i]+=v[i-1];
        int mx{};
        for(int i=0;i<=largest;i++){
            if(v[i]){
                int l=max(0,i-k);
                int r=min(largest,i+k);
                int tot=v[r]-(l>0?v[l-1]:0);
                int tc=v[i]-(i>0?v[i-1]:0);
                int conversion=tot-tc;
                int mxposs=tc+min(conversion,numOperations);
                mx=max(mxposs,mx);
            }
        }return mx;
    }
};