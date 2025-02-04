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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* behind = dummy;
        ListNode* ahead = head;
        while(n>0){
            ahead = ahead->next;
            n--;
        }
        while(ahead){
            behind = behind->next;
            ahead = ahead->next;
        }
        behind->next = behind->next->next;
        return dummy->next;
    }
};