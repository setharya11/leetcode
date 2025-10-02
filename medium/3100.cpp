class Solution {
public:
    int maxBottlesDrunk(int full, int exchange) {
        if(full<exchange)return full;
        else if(full==exchange)return full+1;
        int used=full,cnt=full;
        while(used>=exchange ){
            used-=exchange;
            used++;cnt++;
            exchange++;                
        }
        return cnt;
    }
};