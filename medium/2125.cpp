class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        int cnt,ans{};
        for(auto i:bank){
            cnt=0;
            for(auto j:i)   if(j=='1')cnt++;
            if(cnt>0)v.push_back(cnt);
        }
        for(int i=1;i<v.size();i++){
            ans+=v[i]*v[i-1];
        }   
        return ans;
    }
};