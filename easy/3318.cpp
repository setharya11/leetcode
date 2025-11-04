class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int sum{};
        vector<int>ans;
        for(int i=0;i<=nums.size()-k;i++){
            unordered_map<int,int>mp;
            for(int j=i;j<i+k;j++)    mp[nums[j]]++;
            vector<pair<int, int>> sorted(mp.begin(), mp.end());
            sort(sorted.begin(), sorted.end(),[](auto &a, auto &b) { 
                if (a.second == b.second) return a.first > b.first;
                return a.second > b.second; });
            int cnt = 0;
            sum=0;
            for (auto &p : sorted) {
                if (cnt == x) break;
                sum += p.second * p.first;
                cnt++;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};