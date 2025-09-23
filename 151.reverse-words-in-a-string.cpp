// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
protected:
  string standardalizeString(string s) {
    string ans = s;
    while (ans[0] == ' ') {
      ans.erase(0, 1);
    }
    while (ans[ans.size() - 1] == ' ') {
      ans.erase(ans.size() - 1, 1);
    }
    int tempPos = ans.find("  ", 0);
    while (tempPos != string::npos) {
      ans.erase(tempPos, 1);
      tempPos = ans.find("  ", 0);
    }
    return ans;
  }

  vector<string> splitString(string s, char splitor) {
    vector<string> ans = {};
    string tempString = s;
    int tempPos = tempString.find(splitor, 0);

    while (tempPos != string::npos) {
      string subStr = tempString.substr(0, tempPos);
      ans.push_back(subStr);

      tempString = tempString.erase(0, tempPos + 1);
      tempPos = tempString.find(splitor, 0);
    }
    ans.push_back(tempString);
    return ans;
  }

public:
  string reverseWords(string s) {
    string ans = "";
    string standardalizeString = this->standardalizeString(s);
    vector<string> splitedString = this->splitString(standardalizeString, ' ');
    for (int i = splitedString.size() - 1; i >= 0; i--) {
      ans += splitedString[i];
      if (i != 0) {
        ans += " ";
      }
    }
    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  string input = "  hello   world  ";
  cout << solution.reverseWords(input) << endl;
  return 0;
}
