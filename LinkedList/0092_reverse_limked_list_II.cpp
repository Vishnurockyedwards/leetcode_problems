/*
problem: reverse linked list
pattern : use a dummy to point at head, then move prev till left point, start a loop fron i= 0  to i = right-left, and revrse them 
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
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        
        ListNode* dummy = new ListNode(0);
        // dummy->next = head;

        // Step 2: Move `prev` to the node before the `left`th node
        ListNode* prev = dummy;
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // Step 3: Start reversing the sublist
        ListNode* curr = prev->next;
        ListNode* next = nullptr;

        // Reverse the sublist between left and right
        for (int i = 0; i < right - left; i++) {
            next = curr->next;
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
        }

        return dummy->next;
    }
};
