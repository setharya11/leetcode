class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int ind=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(ind!=-1 && i-ind<k+1)return 0; 
                ind=i;
            }
        }return 1;
    }    
};