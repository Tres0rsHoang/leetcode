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
protected:
  bool isVowel(char i) {
    return i == 'a' || i == 'e' || i == 'o' || i == 'i' || i == 'u';
  }

public:
  int maxVowels(string s, int k) {
    int ans = 0;
    int n = s.size();
    int vowelNums = 0;

    for (int i = 0; i < k; i++) {
      if (isVowel(s[i])) {
        vowelNums++;
      }
    }
    ans = vowelNums;

    for (int i = k; i < n; i++) {
      if (isVowel(s[i - k])) {
        vowelNums--;
      }
      if (isVowel(s[i])) {
        vowelNums++;
      }

      ans = max(ans, vowelNums);
    }

    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  string s = "abciiidef";
  int k = 3;

  cout << solution.maxVowels(s, k);

  return 0;
}
