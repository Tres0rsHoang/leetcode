// @leet imports start
#include <bits/stdc++.h>
#include <vector>
using namespace std;
// @leet imports end

// @leet start
class Solution {
protected:
  int collectTime(char type, string garbage) {
    int time = 0;
    for (int i = 0; i < garbage.size(); i++) {
      if (garbage[i] == type)
        time++;
    }
    return time;
  }

  int lastHouseHaveGarbage(char type, vector<string> &houses) {
    int index = -1;
    for (int i = 0; i < houses.size(); i++) {
      for (char gtype : houses[i]) {
        if (gtype == type) {
          index = i;
          break;
        }
      }
    }
    return index;
  }

public:
  int garbageCollection(vector<string> &garbage, vector<int> &travel) {
    int ans = 0;
    char types[] = {'M', 'P', 'G'};

    for (char type : types) {
      int index = this->lastHouseHaveGarbage(type, garbage);
      for (int i = 0; i <= index; i++) {
        ans += this->collectTime(type, garbage[i]);
        if (i + 1 <= index) {
          ans += travel[i];
        }
      }
    }

    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  vector<string> garbage = {"G", "P", "GP", "GG"};
  vector<int> travel = {2, 4, 3};

  cout << solution.garbageCollection(garbage, travel) << endl;
  return 0;
}
