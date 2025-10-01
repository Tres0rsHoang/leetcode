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
class RecentCounter {
private:
  queue<int> request;

public:
  RecentCounter() {}

  int ping(int t) {
    int s = t - 3000;
    request.push(t);
    while (!request.empty() && request.front() < s) {
      request.pop();
    }

    return request.size();
  }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
// @leet end

int main() {
  RecentCounter *obj = new RecentCounter();
  cout << obj->ping(1) << endl;
  cout << obj->ping(100) << endl;
  cout << obj->ping(3001) << endl;
  cout << obj->ping(3002) << endl;
  return 0;
}
