// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

/**
 * Definition for singly-linked list.
 */

struct ListNode {
  int val;
  ListNode *next;

  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// @leet start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {

public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *result = nullptr;
    ListNode *l1Head = l1;
    ListNode *l2Head = l2;

    int temp = 0;

    while (l1Head && l2Head) {
      int value = l1Head->val + l2Head->val + temp;

      if (value >= 10) {
        temp = 1;
        value %= 10;
      } else {
        temp = 0;
      }
      if (!result) {
        result = new ListNode(value);
      } else {
        ListNode *tempResultHead = result;
        while (tempResultHead->next) {
          tempResultHead = tempResultHead->next;
        }
        tempResultHead->next = new ListNode(value);
      }
      l1Head = l1Head->next;
      l2Head = l2Head->next;
    }

    ListNode *remainHead = nullptr;

    if (l1Head) {
      remainHead = l1Head;
    }
    if (l2Head) {
      remainHead = l2Head;
    }

    while (remainHead) {
      int value = remainHead->val + temp;
      if (value >= 10) {
        temp = 1;
        value %= 10;
      } else {
        temp = 0;
      }
      ListNode *tempResultHead = result;
      while (tempResultHead->next) {
        tempResultHead = tempResultHead->next;
      }
      tempResultHead->next = new ListNode(value);

      remainHead = remainHead->next;
    }

    if (temp == 1) {
      ListNode *tempResultHead = result;
      while (tempResultHead->next) {
        tempResultHead = tempResultHead->next;
      }
      tempResultHead->next = new ListNode(1);
    }

    return result;
  }
};
// @leet end

int main() { Solution(); }
