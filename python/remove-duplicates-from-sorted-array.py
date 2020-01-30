class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        result = len(nums)
        while i < result-1:
            if(nums[i] == nums[i+1]):
                nums.pop(i+1)
                result = result -1
            else:
                i = i+1
        return len(nums)
