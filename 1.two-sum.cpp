// @leet imports start
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> toFind;

    int first = -1;
    int second = -1;

    for (int i = 0; i < nums.size(); i++) {
      toFind[target - nums[i]] = i;
    }

    for (int i = 0; i < nums.size(); i++) {
      if (toFind.find(nums[i]) != toFind.end() && toFind[nums[i]] != i) {
        first = toFind[nums[i]];
        second = i;
      }
    }

    return {first, second};
  }
};
// @leet end

int main() { Solution(); }
