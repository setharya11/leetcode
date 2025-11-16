class Solution {
public:
    int numSub(string s) {
        long long mod = 1e9+7,ans{}, cnt{};
        for (char c : s) {
            if (c == '1') cnt++;
            else {
                ans += cnt * (cnt + 1) / 2 % mod;
                cnt = 0;
            }
        }
        ans += cnt * (cnt + 1) / 2 % mod;
        return ans;
    }
};
