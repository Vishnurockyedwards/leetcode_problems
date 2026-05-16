/*
problem: middle of the linked list
patter: slow and fast pointer
*/

#include <iostream>
#include <list>

using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Slow and Fast Pointer Approach
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};

// int main() {
//     // Creating linked list: 1 -> 2 -> 3 -> 4 -> 5
//     ListNode* head = new ListNode(1);
//     head->next = new ListNode(2);
//     head->next->next = new ListNode(3);
//     head->next->next->next = new ListNode(4);
//     head->next->next->next->next = new ListNode(5);

//     Solution obj;

//     ListNode* ans = obj.middleNode(head);

//     cout << "Middle Node: " << ans->val;

//     return 0;
// }