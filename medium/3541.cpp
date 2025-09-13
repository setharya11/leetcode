class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp;
        int maxx{},maxx_v{};
        for(auto i:s){
            if(i=='a'||i=='o'||i=='e'||i=='i'||i=='u'){
                maxx=max(maxx,++mp[i]);
            }
            else{
                maxx_v=max(maxx_v,++mp[i]);
            }
        }return maxx_v+maxx;
    }
};