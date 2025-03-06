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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* fast=head->next;
        
        while(fast!=NULL){
            ListNode* slow=head;
            while(slow!=fast){
                if(fast->val < slow->val){
                    int temp=slow->val;
                    slow->val=fast->val;
                    fast->val=temp;
                    
                }
                slow=slow->next;
            }
            fast=fast->next;
        }
        return head;
    }
};