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

private:
  string minusString(string str1, string str2) {
    for (int i = 0; i < str2.size(); i++) {
      if (str1[i] != str2[i]) {
        return str1;
      }
    }

    return str1.substr(str2.size(), str1.size() - str2.size());
  }

public:
  string gcdOfStrings(string str1, string str2) {
    while (str1 != str2) {
      if (str1.size() > str2.size()) {
        string tmp = this->minusString(str1, str2);
        if (tmp == str1) {
          return "";
        }
        str1 = tmp;
      } else {
        string tmp = this->minusString(str2, str1);
        if (tmp == str2) {
          return "";
        }
        str2 = tmp;
      }
    }
    return str1;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  string str1 = "LEET", str2 = "CODE";
  cout << solution.gcdOfStrings(str1, str2);
  return 0;
}
