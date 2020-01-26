#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    int values[13] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string> symbols = {"M", "CM", "D", "CD", "C","XC", "L", "XL", "X", "IX", "V", "IV", "I"};
public:
    string intToRoman(int num) {
        if(num<1 || 3999<num) return "ERROR:NUM NOT IN RANGE";
        int cnt;
        string out = "";
        for(int i=0;i<13;i++)
        {
            cnt = num/values[i];
            cout<<values[i]<<" "<<cnt<<endl;
            while(0<cnt)
            {
                out+=symbols[i];
                cnt--;
            }
            num = num - num/values[i]*values[i];
        }
        return out;
    }
};

int main()
{
    Solution solu;
    string s = solu.intToRoman(19);
    cout<<s<<endl;
    return 0;
}