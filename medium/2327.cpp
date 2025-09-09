class Solution {
public:
    int mod = 1e9+7;

    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<long long> dp(n+1, 0);
        dp[1] = 1;  // on day 1, one person knows

        long long share = 0;  // number of people who can share today
        for (int day = 2; day <= n; day++) {
            // new people who can share today
            if (day - delay >= 1) share = (share + dp[day - delay]) % mod;
            // remove people who forget today
            if (day - forget >= 1) share = (share - dp[day - forget] + mod) % mod;

            dp[day] = share;
        }

        // final answer = sum of those who still remember on day n
        long long ans = 0;
        for (int day = n - forget + 1; day <= n; day++) {
            if (day >= 1) ans = (ans + dp[day]) % mod;
        }

        return ans;
    }
};
