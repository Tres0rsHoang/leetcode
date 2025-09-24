// @leet imports start
#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> v) {
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
}
// @leet imports end

// @leet start
class Solution {
public:
  bool isSubsequence(string s, string t) {
    int l = 0, r = t.size();

    while (l < r && s.size() != 0) {
      if (t[l] == s[0]) {
        s.erase(0, 1);
      }
      if (s.size() == 0) {
        return true;
      }
      if (t[r] == s[s.size() - 1]) {
        s.erase(s.size() - 1, 1);
      }
      l++;
      r--;
    }

    return s.size() == 0;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  string s = "axc", t = "ahbgdc";

  cout << solution.isSubsequence(s, t);
  return 0;
}
