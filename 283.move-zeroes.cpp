// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int count = 0;
    vector<int> ans = {};
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0) {
        count++;
      } else {
        ans.push_back(nums[i]);
      }
    }
    for (int i = 0; i < count; i++) {
      ans.push_back(0);
    }
    nums = ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> input = {0, 1, 0, 3, 12};
  solution.moveZeroes(input);
  for (int i = 0; i < input.size(); i++) {
    cout << input[i] << " ";
  }
  return 0;
}
