class Solution {
public:
    int countPartitions(vector<int>& nums) {
        long long S = 0;
        for (int x : nums) S += x;
        return (S % 2 == 0) ? (int)nums.size() - 1 : 0;
    }
};