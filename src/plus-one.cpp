class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size() < 0) return digits;
        int add = 1;
        for(int i=digits.size()-1; -1<i;i--)
        {
            int num = digits[i] + add;
            if(num<10)
            {
                digits[i] = num;
                add = 0;
            }
            else
            {
                digits[i] = num -10;
                add = 1;
            }
            
        }
        if(add==1)
        {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
