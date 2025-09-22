// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
class Solution {
protected:
  bool palindromicCheck(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
      if (s[i] != s[n - i - 1]) {
        return false;
      }
    }
    return true;
  }

public:
  string longestPalindrome(string s) {
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
      for (int j = ans.size() + 1; j <= s.size() - i; j++) {
        if (s[i] != s[i + j - 1]) {
          continue;
        }
        string subStr = s.substr(i, j);
        if (palindromicCheck(subStr)) {
          ans = subStr;
        }
      }
    }
    return ans;
  }
};
// @leet end

int main() {
  Solution solution = Solution();
  string input =
      "uwqrvqslistiezghcxaocjbhtktayupazvowjrgexqobeymperyxtfkchujjkeefmdngfaby"
      "cqzlslocjqipkszmihaarekosdkwvsirzxpauzqgnftcuflzyqwftwdeizwjhloqwkhevfov"
      "qwyvwcrosexhflkcudycvuelvvqlbzxoajisqgwgzhioomucfmkmyaqufqggimzpvggdohgx"
      "heielsqucemxrkmmagozxhvxlwvtbbcegkvvdrgkqszgajebbobxnossfrafglxvryhvyfci"
      "bfkgpbsorqprfujfgbmbctsenvbzcvypcjubsnjrjvyznbswqawodghmigdwgijfytxbgpxr"
      "eyevuprpztmjejkaqyhppchuuytkdsteroptkouuvmkvejfunmawyuezxvxlrjulzdikvhgx"
      "ajohpzrshrnngesarimyopgqydcmsaciegqlpqnclpwcjqmhtmtwwtbkmtnntdllqbyyhfxs"
      "jyhugnjbebtxeljytoxvqvrxygmtogndrhlcmbmgiueliyfkkcuypvvzkomjrfhuhhnfbxeu"
      "vssvvllgukdolffukzwqaimxkngnjnmsbvwkajyxqntsqjkjqvwxnlxwjfiaofejtjcveqst"
      "qhdzgqistxwsgrovvwgorjaoosremqbzllgbgrwtqdggxnyvkivlcvnv";
  string output = solution.longestPalindrome(input);
  cout << output << endl;
}
