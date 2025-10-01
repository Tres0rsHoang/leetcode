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
  string decodeString(string s) {
    string ans = "";
    cout << s << endl;
    int repeat = 0;

    int left = 0;
    int right = 0;
    int count = 0;

    for (int i = 0; i < s.size(); i++) {
      char c = s[i];
      if (repeat == 0 && c >= 'a' && c <= 'z') {
        ans += c;
        continue;
      }
      if (count == 0 && c >= '0' && c <= '9') {
        repeat = repeat * 10 + (c - '0');
        continue;
      }
      if (c == '[') {
        if (count == 0) {
          left = i;
        }
        count++;
      }
      if (c == ']') {
        count--;
        if (count == 0) {
          right = i;
        }
      }
      if (count == 0) {
        string subStr = s.substr(left + 1, right - left - 1);
        for (int i = 0; i < repeat; i++) {
          ans += subStr;
        }
        repeat = 0;
      }
    }

    if (ans.find('[') != string::npos) {
      return decodeString(ans);
    }

    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  string s = "a2[c]a2[c]a2[c]cc";
  cout << solution.decodeString(s);
  return 0;
}
