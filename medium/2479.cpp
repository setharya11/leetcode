class Solution {
public:
    int makeTheIntegerZero(int n1, int n2) {
        for (long long t = 1; t <= 36; t++) {
            long long val =1LL * n1 - t * 1LL* n2;
            if (val < 0) continue;
            if (__builtin_popcountll(val) <= t && t <= val) return t;
        }
        return -1;
    }
};
