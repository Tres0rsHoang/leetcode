// @leet imports start
#include <bits/stdc++.h>
#include <unordered_map>
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
  bool closeStrings(string word1, string word2) {
    if (word1.size() != word2.size()) {
      return false;
    }

    unordered_map<char, int> existChar1;
    unordered_map<char, int> existChar2;
    for (int i = 0; i < word1.size(); i++) {
      existChar1[word1[i]]++;
    }
    for (int i = 0; i < word2.size(); i++) {
      existChar2[word2[i]]++;
    }
    if (existChar1.size() != existChar2.size()) {
      return false;
    }

    for (pair<char, int> p1 : existChar1) {
      if (existChar2[p1.first] == 0) {
        return false;
      }
    }

    for (pair<char, int> p1 : existChar1) {
      bool erased = false;
      for (pair<char, int> p2 : existChar2) {
        if (p1.second == p2.second) {
          existChar2.erase(p2.first);
          erased = true;
          break;
        }
      }
      if (!erased) {
        return false;
      }
    }
    return true;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  string word1 = "abc", word2 = "bca";

  cout << solution.closeStrings(word1, word2) << endl;
  return 0;
}
