class Solution {
public:
    long long fun(int l, int r){
        long long L=1,S=1,steps{};
        while(L<=r){
            long long R=4*L-1;
            long long st=max(L,1ll*l);
            long long end=min(R,1ll*r);
            if(st<=end) steps+=(end-st+1)*S;
            S++;
            L*=4;
        }return steps;
    }

    long long minOperations(vector<vector<int>>& queries) {
        long long result=0;
        for(auto qu:queries){
            int l=qu[0];
            int r=qu[1];
            long long steps=fun(l,r);
            result+=(steps+1)/2;
        }
        return result;
    }
};
