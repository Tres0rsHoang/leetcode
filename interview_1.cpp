/***
Given an integer array nums, find the subarray with the largest sum, and return
its sum.

 Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> nums = {5, 4, -1, 7, 8};
  int n = nums.size();
  int mx = n == 1 ? nums[0] : INT_MIN;

  for (int i = 0; i < n - 1; i++) {
    int sum = nums[i];
    for (int j = i + 1; j < n; j++) {
      sum += nums[j];
      mx = max(mx, sum);
    }
  }
  return 0;
}
