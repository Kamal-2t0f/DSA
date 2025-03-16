class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,n=nums.size(),t=n-1,o=0;
        while(o<=t)
        {
            if(nums[o]==2) swap(nums[t--],nums[o]);
           else if(nums[o]==0) swap(nums[z++],nums[o++]);
            else o++;
        }
    }
};