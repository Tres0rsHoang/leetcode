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
  int maxSubArray(vector<int> &nums) {
    int n = nums.size();
    int mx = n == 1 ? nums[0] : INT_MIN;
    for (int i = 0; i < n; i++) {
      int sum = nums[i];
      for (int j = i + 1; j < n; j++) {
        sum += nums[j];
      }
    }
    return mx;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> nums = {2, -1};
  cout << solution.maxSubArray(nums) << endl;
  return 0;
}
