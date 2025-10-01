// @leet imports start
#include <bits/stdc++.h>
#include <cstdlib>
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
  vector<int> asteroidCollision(vector<int> &asteroids) {
    int n = asteroids.size();
    int size = 0;
    for (int i = 0; i < n; i++) {
      int value = abs(asteroids[i]);
      bool direc = asteroids[i] > 0 ? true : false;
      bool deleted = false;
      while (asteroids[i] < 0 && size > 0 && asteroids[size - 1] > 0) {
        int svalue = abs(asteroids[size - 1]);
        if (value > svalue) {
          asteroids[size - 1] = asteroids[i];
          size--;
        }
        if (value == svalue) {
          size -= 2;
          deleted = true;
          break;
        }
        if (value < svalue) {
          size--;
          deleted = true;
          break;
        }
      }

      if (!deleted) {
        asteroids[size] = asteroids[i];
      }
      size++;
    }
    vector<int> ans;
    for (int i = 0; i < size; i++) {
      ans.push_back(asteroids[i]);
    }
    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<int> asteroids = {5, 10, -5};
  vector<int> ans = solution.asteroidCollision(asteroids);

  printVector(ans);
  return 0;
}
