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
  string predictPartyVictory(string senate) {
    queue<int> r = {};
    queue<int> d = {};
    int n = senate.size();

    for (int i = 0; i < n; i++) {
      char c = senate[i];
      if (c == 'R') {
        r.push(i);
      }
      if (c == 'D') {
        d.push(i);
      }
    }

    while (!r.empty() && !d.empty()) {
      int topR = r.front();
      r.pop();
      int topD = d.front();
      d.pop();
      if (topR < topD) {
        r.push(topR + n);
      } else {
        d.push(topD + n);
      }
    }

    if (r.empty()) {
      return "Dire";
    } else {
      return "Radiant";
    }
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  string senate = "RD";
  cout << solution.predictPartyVictory(senate) << endl;
  return 0;
}
