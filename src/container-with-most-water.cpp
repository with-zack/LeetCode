class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0, right = height.size()-1;
        int area = (right-left)*min(height[left], height[right]);
        while(left<right)
        {
            if(height[left]<height[right])
            {
               left++;
            }
            else
            {
                right--;
            }
            area = max(area, min(height[left], height[right])*(right-left));
        }
        return area;
    }
};
