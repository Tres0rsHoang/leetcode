// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
public:
  int fib(int n) {
    if (n < 2)
      return n;
    return fib(n - 1) + fib(n - 2);
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  int input = 3;
  int output = solution.fib(input);
  cout << output << endl;
  return 0;
}
