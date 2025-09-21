// @leet imports start
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int result = 0;
    for (int i = 0; i < s.size(); i++) {
      int count = 0;
      unordered_map<char, bool> existCharacter;

      for (int j = i; j < s.size(); j++) {
        if (existCharacter[s[j]]) {
          break;
        } else {
          existCharacter[s[j]] = true;
          count++;
        }
      }

      result = max(result, count);
    }

    return result;
  }
};
// @leet end

int main() { Solution(); }
