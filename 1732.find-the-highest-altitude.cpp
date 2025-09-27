// @leet imports start
#include <bits/stdc++.h>
#include <vector>
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
  int largestAltitude(vector<int> &gain) {
    int ans = 0;
    vector<int> altitude(gain.size() + 1, 0);
    for (int i = 1; i <= gain.size(); i++) {
      altitude[i] = altitude[i - 1] + gain[i - 1];
      ans = max(ans, altitude[i]);
    }
    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> gain = {-4, -3, -2, -1, 4, 3, 2};
  cout << solution.largestAltitude(gain) << endl;
  return 0;
}
