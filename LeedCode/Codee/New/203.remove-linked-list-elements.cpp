/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
 */

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        // Remove matching nodes from beginning
        while(head != nullptr && head->val == val){
            head = head->next;
        }

        ListNode* cur = head;

        while(cur != nullptr && cur->next != nullptr){

            if(cur->next->val == val){
                cur->next = cur->next->next;
            } else{
                cur = cur->next;
            }
        }

        return head;
    }
};