class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int ptr=0;ptr<nums.size();ptr++)
        {
            if(nums[ptr]==target || target < nums[ptr]) return ptr;
        }
        return nums.size();
    }
};
