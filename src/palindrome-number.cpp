#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x <10) return (-1<x); // return false for negative values, true for values from 0 to 9
        if (x - x / 10 * 10 == 0) return false; // return false for values ends with 0
        size_t cnt = 0;
        int digits[10];
        digits[0] = x - x / 10 * 10;
        int A = x/10;
        while (A!=0)
        {
            cnt++;
            digits[cnt] = A - A / 10 * 10;
            A /= 10;
        }
        for (size_t i = 0; i < (cnt+1)/2; i++)
        {
            if (digits[i] != digits[cnt - i]) return false;
        }
        return true;
    }
};

int main()
{
    Solution so;
    int x;
    cin >> x;
    cout << so.isPalindrome(x) << endl;
}