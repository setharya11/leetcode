class Solution {
public:
    int totalMoney(int n) {
        int week=n/7,days=n%7,ans{};
        for(int i=0;i<week;i++)  
          ans+=28+i*7;
        for(int i=0;i<days;i++)    
            ans+=(week+1)+i;
        return ans;
    }
};