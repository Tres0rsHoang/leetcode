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
  int pivotIndex(vector<int> &nums) {
    int n = nums.size();
    vector<int> sums(n + 1, 0);

    for (int i = 1; i <= n; i++) {
      sums[i] = sums[i - 1] + nums[i - 1];
    }
    for (int i = 0; i < n; i++) {
      if (sums[i] == sums[n] - sums[i + 1])
        return i;
    }
    return -1;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> nums = {1, 7, 3, 6, 5, 6};
  cout << solution.pivotIndex(nums);
  return 0;
}
