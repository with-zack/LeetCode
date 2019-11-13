#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() < 1) return string("");
		size_t len = strs[0].size();
		for (auto str : strs)
		{
			if (str.size() < len) len = str.size();
		}
		string common = strs[0].substr(0,len);
		size_t cnt = 0;
		while (cnt<strs.size())
		{
			cnt = 0;
			for (auto str : strs)
			{
				if (str.substr(0, len) != common)
				{
					len -= 1;
					common.pop_back();
				}
				else
				{
					cnt++;
				}
			}			
		}
		return common;
	}
};

int main()
{
	vector<string> input = { "flower", "fuck", "flow" };
	cout << input[0] << endl;
}