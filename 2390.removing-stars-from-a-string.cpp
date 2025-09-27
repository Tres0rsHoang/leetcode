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
  string removeStars(string s) {
    int size = 0;

    for (char c : s) {
      if (c == '*') {
        size--;
      } else {
        s[size++] = c;
      }
    }

    return s.substr(0, size);
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  string s = "leet**cod*e";

  cout << solution.removeStars(s);

  return 0;
}
