class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int sum = target[0]; // start with first element
        for (int i = 1; i < target.size(); i++) {
            // add increase only when current > previous
            if (target[i] > target[i - 1]) {
                sum += target[i] - target[i - 1];
            }
        }
        return sum; // total operations
    }
};