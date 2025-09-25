// @leet imports start
#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int> v) {
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
}
// @leet imports end
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

static const bool Booster = []() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  return true;
}();

inline bool isdigit(char c) { return c >= '0' && c <= '9'; }

void parse_input_and_solve(std::ofstream &out, std::string &s, std::string &t) {
  int n = s.size() - 1;
  int k = stoi(t);
  int flip = 0, l = 1, r = 1, len = 0;
  while (r < n) {
    if (s[r] == 48)
      flip++;
    if (flip > k) {
      if (s[l] == 48)
        flip--;
      l += 2;
    }
    len = max(len, r / 2 - l / 2 + 1);
    r += 2;
  }
  out << len << endl;
}

bool Solve = []() {
  std::ofstream out("user.out");
  std::string s, t;
  while (std::getline(std::cin, s) && std::getline(std::cin, t)) {
    parse_input_and_solve(out, s, t);
  }
  out.flush();
  exit(0);
  return true;
}();

// @leet start
class Solution {
public:
  int longestOnes(vector<int> &nums, int k) {
    int ans = 0;
    int count = 0;
    int left = 0;

    for (int right = 0; right < nums.size(); right++) {
      if (nums[right] == 0) {
        count++;
      }
      if (count <= k) {
        int length = right - left + 1;
        ans = max(ans, length);
      }
      while (count > k && left < right) {
        if (nums[left] == 0) {
          count--;
        }
        left++;
      }
    }

    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> nums = {0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};
  int k = 3;
  cout << solution.longestOnes(nums, k);
  return 0;
}
