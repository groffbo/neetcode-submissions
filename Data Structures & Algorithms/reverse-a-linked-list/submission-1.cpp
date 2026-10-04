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
    ListNode* reverseList(ListNode* head) {
        //want to maintain 3 pointers
        // current, next, and previous
        ListNode* curr = head;
        ListNode* next = curr->next;
        ListNode* prev = nullptr;

        while(curr) {
            // point curr to prev
            // new prev set
            // new curr set
            // new next set

            curr->next = prev;
            prev = curr;
            curr = next;
            next = next->next;
        }

        return prev;
        
    }
};
