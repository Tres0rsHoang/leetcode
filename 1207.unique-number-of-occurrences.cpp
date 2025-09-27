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
  bool uniqueOccurrences(vector<int> &arr) {
    int count[2001];
    fill(count, count + 2001, 0);
    for (int i = 0; i < arr.size(); i++) {
      count[arr[i] + 1000]++;
    }
    int exist[1001];
    fill(exist, exist + 1001, false);
    for (int i = 0; i < 2001; i++) {
      if (exist[count[i]] && count[i] != 0) {
        return false;
      }
      exist[count[i]] = true;
    }
    return true;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> arr = {1, 2, 2, 1, 1, 3};

  cout << solution.uniqueOccurrences(arr) << endl;
  return 0;
}
