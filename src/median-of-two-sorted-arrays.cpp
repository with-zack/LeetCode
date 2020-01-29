#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int total_len = nums1.size() + nums2.size();
        int len_1 = nums1.size();
        int len_2 = nums2.size();
        int cur_1 = 0;
        int cur_2 = 0;
        float mid;
        while(cur_1+cur_2<total_len/2)
        {
            if(cur_1<len_1 && cur_2<len_2)
            {
                mid = (nums1[cur_1]<nums2[cur_2])?nums1[cur_1++]:nums2[cur_2++];
            }
            else if(cur_1 == len_1)
            {
                mid = nums2[cur_2++];
            }
            else// if(cur_2 == len_2)
            {
                mid = nums1[cur_1++];
            }
        }
        if(total_len%2==0)
        {
            if(cur_1<len_1 && cur_2<len_2)
            {
                mid += nums1[cur_1]<nums2[cur_2]? nums1[cur_1]:nums2[cur_2];
            }
            else if(cur_1 == len_1)
            {
                mid += nums2[cur_2];
            }
            else// if(cur_2 == len_2)
            {
                mid += nums1[cur_1];
            }
            mid /= 2;
        }
        else
        {
            if(cur_1<len_1 && cur_2<len_2)
            {
                mid = nums1[cur_1]<nums2[cur_2]? nums1[cur_1]:nums2[cur_2];
            }
            else if(cur_1 == len_1)
            {
                mid = nums2[cur_2];
            }
            else// if(cur_2 == len_2)
            {
                mid = nums1[cur_1];
            }
        }
        return mid;
    }
};

int main()
{
	vector<int> nums1 = {1,2,3};
	vector<int> nums2 = {2,3,4};
	Solution so;
	cout<<so.findMedianSortedArrays(nums1, nums2)<<endl;
}
