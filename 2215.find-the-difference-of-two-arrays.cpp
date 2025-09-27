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
  vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2) {
    int flag[2001];
    for (int i = -1000; i <= 1000; i++) {
      flag[i + 1000] = 0;
    }

    for (int a : nums1) {
      flag[a + 1000] |= 1;
    }
    for (int b : nums2) {
      flag[b + 1000] |= 2;
    }

    int count = 0;
    for (int i = -1000; i <= 1000; i++) {
      if (flag[i + 1000] == 1) {
        nums1[count++] = i;
      }
    }

    nums1.resize(count);
    count = 0;
    for (int i = -1000; i <= 1000; i++) {
      if (flag[i + 1000] == 2) {
        nums2[count++] = i;
      }
    }
    nums2.resize(count);

    return {nums1, nums2};
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> nums1 = {1, 2, 3}, nums2 = {2, 4, 6};

  solution.findDifference(nums1, nums2);

  return 0;
}
