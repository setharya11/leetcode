
// we have to find which person 1 or 2  reaches to the 3rd person
// so idea is find the positive difference b/w (3rd and 2nd) and (1st and 3rd) 
// whichever is smaller will reaches first
// here x is 1st, y is 2nd, and z is 3rd. so we can compute the answer by following...

class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(z-y)==abs(z-x))return 0;  
return (abs(z-y)<abs(z-x)) ? 2:1;
    }
};