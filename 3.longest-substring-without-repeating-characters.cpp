// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int last[128];
    fill(begin(last), end(last), -1);

    int result = 0;
    int l = 0;

    for (int r = 0; r < s.size(); r++) {
      if (last[s[r]] >= l) {
        l = last[s[r]] + 1;
      }
      last[s[r]] = r;
      result = max(result, r - l + 1);
    }
    return result;
  }
};
// @leet end

int main() { Solution(); }
