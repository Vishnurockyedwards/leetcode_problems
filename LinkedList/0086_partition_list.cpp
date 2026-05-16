/*
problem: Partition List
pattern : usnig a lesshead pointer and graterhead pointer
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessHead = new ListNode(0);     // Dummy head for < x
        ListNode* greaterHead = new ListNode(0);  // Dummy head for >= x
        ListNode* less = lessHead;
        ListNode* greater = greaterHead;

        while (head != nullptr) {
            if (head->val < x) {
                less->next = head;
                less = less->next;
            } else {
                greater->next = head;
                greater = greater->next;
            }
            head = head->next;
        }

        greater->next = nullptr;        // End the greater list
        less->next = greaterHead->next; // Link the two parts

        return lessHead->next;
    }
};