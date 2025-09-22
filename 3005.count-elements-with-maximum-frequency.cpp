// @leet imports start
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int maxFrequencyElements(vector<int> &nums) {
    int ans = 0;
    unordered_map<int, int> map;

    int maxNum = -1;
    for (int i = 0; i < nums.size(); i++) {
      map[nums[i]] = 0;
    }
    for (int i = 0; i < nums.size(); i++) {
      int number = ++map[nums[i]];
      maxNum = max(maxNum, number);
    }
    for (int i = 0; i < nums.size(); i++) {
      if (map[nums[i]] == maxNum) {
        ans++;
      }
    }
    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> input = {1, 2, 2, 3, 1, 4};
  int output = solution.maxFrequencyElements(input);
  cout << output << endl;

  return 0;
}
