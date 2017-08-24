class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans;
        if(len==0) return ans;
        
        int res =0;
        for(int i=0;i<len;i++){
            res ^= nums[i];
        }
        
        int cnt;
        for(cnt=31;cnt>=0;cnt--){
            if((res&(1<<cnt)) == (1<<cnt)) break;
        }
        int a=0;
        int b =0;
        for(int i=0;i<len;i++){
            if((nums[i]&(1<<cnt)) == (1<<cnt)){
                a ^= nums[i];
            } else {
                b^=nums[i];
            }
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
