#include <iostream>
#include <vector>
#include <assert.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        assert(1<nums.size());
        int len = nums.size();
        vector<int> unique;
        for(int start=0;start<len;start++)
        {
            int ele = nums[start];
            for(int i=start+1;i<len;i++)
            {
                if(nums[i]+ele==target)
                {
                    return vector<int>({start, i});
                }
            }
        }
        return vector<int>({-1,-1});
        
    }
};

int main()
{
    Solution so;
    vector<int> list = {1,2,3,3};
    for(auto i:so.twoSum(list, 5))
    {
        cout<<i<<endl;
    }
}