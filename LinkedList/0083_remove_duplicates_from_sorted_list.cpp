/*
problem: Remove Duplicates from Sorted List
pattern : usnig a current pointer at head
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current = head;

        while (current && current->next) {
            if (current->val == current->next->val) {
                // Skip the duplicate node
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp; // delteing the duplicaate node 👍
            } else {
                current = current->next;
            }
        }

        return head;
    }
};