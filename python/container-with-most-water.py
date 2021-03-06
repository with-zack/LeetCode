class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        area = (len(height)-1)*min(height[0], height[-1])
        while left<right:
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
            area = max(area, (right-left)*min(height[left], height[right]))
        return area
