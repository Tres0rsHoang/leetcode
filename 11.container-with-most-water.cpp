// @leet imports start
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int maxArea(vector<int> &height) {
    int ans = 0;
    int left = 0;
    int right = height.size() - 1;

    while (left < right) {
      int w = right - left;
      int h = min(height[right], height[left]);
      ans = max(ans, w * h);
      if (height[left] > height[right]) {
        right--;
      } else {
        left++;
      }
    }

    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> input = {1, 8, 6, 2, 5, 4, 8, 25, 7};

  cout << solution.maxArea(input) << endl;
  return 0;
}
