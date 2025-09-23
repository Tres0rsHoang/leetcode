// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  string mergeAlternately(string word1, string word2) {
    string ans = "";
    int m = min(word1.size(), word2.size());
    for (int i = 0; i < m; i++) {
      ans += word1[i];
      ans += word2[i];
    }
    if (word1.size() > word2.size()) {
      ans += word1.substr(m, word1.size() - m);
    } else {
      ans += word2.substr(m, word2.size() - m);
    }
    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  string word1 = "ab";
  string word2 = "pqrs";
  cout << solution.mergeAlternately(word1, word2) << endl;
  return 0;
}
