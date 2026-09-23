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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp1;
        ListNode* prev = head;
        while(prev->next!=nullptr){
            while(temp1!=NULL){
                if(head->val>=temp1->val){
                    temp1 = temp1->next;
                }
                else{
                    head = temp1;
                    temp1 = temp1->next;
                }
            }
            prev = head;
            temp = head->next;
            temp1 = head->next;
            while(temp!=nullptr){
                
                if(temp1!=nullptr && temp->val>=temp1->val){
                    temp1 = temp1->next;
                }
                else{
                    prev->next = temp1;
                    temp = temp1;
                }
                if(temp1==nullptr && temp!=nullptr){
                    prev = prev->next;
                    temp = temp->next;
                    temp1 = temp;
                }
                
            }
        }
        return head;
    }
};