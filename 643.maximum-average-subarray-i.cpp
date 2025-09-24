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
  double findMaxAverage(vector<int> &nums, int k) {
    double avg = 0;
    for (int i = 0; i < k; i++) {
      avg += nums[i] * 1.0 / k;
    }
    double ans = avg;
    for (int i = k; i < nums.size(); i++) {
      avg -= nums[i - k] * 1.0 / k;
      avg += nums[i] * 1.0 / k;
      ans = max(avg, ans);
    }
    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> nums = {1, 12, -5, -6, 50, 3};
  int k = 4;
  cout << solution.findMaxAverage(nums, k);
  return 0;
}
