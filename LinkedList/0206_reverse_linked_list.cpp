/*
problem: merge two sorted ;ists
patter: using a dummy named prev and a tail
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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next; // Save next
            curr->next = prev;               // Reverse the link
            prev = curr;                     // Move prev forward
            curr = nextNode;                 // Move curr forward
        }

        return prev; // New head
    }
};