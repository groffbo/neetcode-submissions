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
    bool isPalindrome(ListNode* head) {
        // fast and slow pointer; find middle
        ListNode* fast = head;
        ListNode* slow = head;

        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* prev = nullptr;
        ListNode* next = slow->next;
        ListNode* root = slow;

        while(root) {
            root->next = prev;
            prev = root;
            root = next;
            next = next->next;
        }

        while(prev && head) {
            if (prev->val != head->val) {
                return false;
            }
            prev = prev->next;
            head = head->next;
        }
        return true;
    }
};