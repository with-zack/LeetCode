class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        book = dict()
        major = nums[0]
        number = 1
        for i in range(len(nums)):
            num = nums[i]
            if num in book.keys():
                book[num] += 1
                if number < book[num]:
                    major = num
                    number = book[num]
            else:
                book[num] = 1
            if (len(nums)/2+1)<number:
                break
        return major
