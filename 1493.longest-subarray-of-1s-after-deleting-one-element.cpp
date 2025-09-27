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
  int longestSubarray(vector<int> &nums) {
    int ans = 0;
    int l = 0;
    bool deleted = false;
    for (int r = 0; r < nums.size(); r++) {
      while (l < r && deleted && nums[r] == 0) {
        if (nums[l] == 0) {
          deleted = false;
        }
        l++;
      }
      if (nums[r] == 0) {
        deleted = true;
      }

      if (deleted || nums[r] == 1) {
        ans = max(r - l, ans);
      }
    }
    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> nums = {0, 1, 1, 1, 0, 1, 1, 0, 1};

  cout << solution.longestSubarray(nums);
  return 0;
}
