// @leet imports start
#include <algorithm>
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
  int maxOperations(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end());

    int ans = 0;
    int l = 0, r = nums.size() - 1;
    while (l < r) {
      int cal = nums[l] + nums[r];
      if (cal == k) {
        ans++;
        l++;
        r--;
      } else if (cal < k) {
        l++;
      } else {
        r--;
      }
    }

    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> input = {1, 2, 3, 4};
  int k = 5;

  cout << solution.maxOperations(input, k);
  return 0;
}
