// @leet imports start
#include <bits/stdc++.h>
#include <climits>
using namespace std;
void printVector(vector<int> v) {
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  cout << endl;
}
// @leet imports end

// @leet start
class Solution {
  int mod = INT_MAX;
  int base = 200;

private:
  int hash(vector<int> number) {
    unsigned int ans = 0;
    for (int i = 0; i < number.size(); i++) {
      ans = (ans * base + number[i]) % mod;
    }
    return ans;
  }

public:
  int equalPairs(vector<vector<int>> &grid) {
    int ans = 0;
    int n = grid.size();
    vector<int> rowHash(n, 0);
    vector<int> columnHash(n, 0);

    for (int i = 0; i < n; i++) {
      rowHash[i] = hash(grid[i]);
    }
    for (int i = 0; i < n; i++) {
      vector<int> temp(n, 0);
      for (int j = 0; j < n; j++) {
        temp[j] = grid[j][i];
      }
      columnHash[i] = hash(temp);
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (columnHash[i] == rowHash[j])
          ans++;
      }
    }

    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<vector<int>> grid = {
      {3, 2, 1},
      {1, 7, 6},
      {2, 7, 7},
  };

  cout << solution.equalPairs(grid) << endl;

  return 0;
}
