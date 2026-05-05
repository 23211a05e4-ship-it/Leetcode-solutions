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
    int lenfun(ListNode* head){
        int len = 0;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k == 0) return head;
        ListNode* temp = head;
        ListNode* t;
        int len = lenfun(head);
        k = k % len;
        if(k == 0) return head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = head;
        k = len-k;
        k--;
        temp = head;
        while(k--){
            temp = temp->next;
        }
        t = temp->next;
        temp->next = nullptr;
        return t;
    }
};