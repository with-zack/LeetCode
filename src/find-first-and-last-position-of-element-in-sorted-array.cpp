class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()<1 || target<nums[0] || nums[nums.size()-1] < target) return vector<int>{-1,-1};
        int left = 0;
        int right = nums.size()-1;
        vector<int> result({-1,-1});
        while(true)
        {
            if(nums[left] == target) result[0] = left;
            else{left++;}
            if(nums[right] == target) result[1] = right;
            else{right--;}
            if(left==nums.size() || (result[0]!=-1 && result[1] != -1)) break;
        }
        return result;
    }
};
