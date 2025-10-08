class Solution {
public:
    vector<int> successfulPairs(vector<int>& s, vector<int>& p, long long ss) {
        int si_=p.size(),l,r,mid;
        vector<int>ans;
        sort(begin(p),end(p));
            for(auto i:s){
                l=0,r=si_-1,mid;
                while(l<=r){
                    mid=l+(r-l)/2;
                    if(1ll*i*p[mid]>=ss)r=mid-1;
                    else l=mid+1;
                }
                ans.push_back(si_-l);
            }return ans;
        }
    };