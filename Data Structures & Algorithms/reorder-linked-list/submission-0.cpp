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
ListNode* reverse(ListNode*head){
    ListNode*prev = NULL;
    ListNode* curr = head;

    while(curr){
        ListNode*next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        int len =0;
        ListNode* curr = head;
        while(curr){
            len ++;
            curr = curr->next;
        } 
        int  mid = (len+1)/2;

        ListNode*first = head;
        ListNode*second  = head;

        for(int i =0;i<mid;i++){
            second = second->next;

        }

        ListNode* temp = head;
        for(int i = 1;i<mid;i++){
            temp = temp->next;

        }
        temp->next = nullptr;

        second = reverse(second);

        while(first && second){
            ListNode*fnext = first->next;
            ListNode*snext = second->next;

            first->next = second;
            second->next = fnext;

            first = fnext;
            second = snext;
            
        }
        
    }
};
