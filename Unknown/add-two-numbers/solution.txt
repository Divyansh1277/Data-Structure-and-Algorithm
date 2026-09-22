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
    void display(ListNode* head){
        ListNode* temp = head;
        while(temp!=nullptr){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int count1 = 0 , count2 = 0;
        // ListNode* curr = l1 , *prev = nullptr , *next;
        // while(curr!=nullptr){
        //     next = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = next;
        //     count1++;
        // }
        // display(prev);
        // ListNode* temp1 = prev;
        // curr = l2;
        // prev = nullptr;
        // while(curr!=nullptr){
        //     next = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = next;
        //     count2++;
        // }
        // display(prev);
        // cout<<count1<<" "<<count2;
        // ListNode* temp3 = temp1;
        // ListNode* temp2 = prev;
        // ListNode* temp4 = temp2;
        ListNode* temp1 = l1, *temp2 = l2 ,*temp3 =l1, *temp4 = l2;
        while(temp1!=nullptr){
            count1++;
            temp1 = temp1->next;
        }
        while(temp2!=nullptr){
            count2++;
            temp2 = temp2->next;
        }
        temp1 = temp3;
        temp2 = temp4;
        int sum=0;
        if(count1>=count2){
            int carry = 0;
            for(int i=0;i<count2;i++){
                int a = temp1->val+temp2->val+carry;
                if(a>=10){
                    carry = 1;
                    a = a%10;
                }
                else{
                    carry = 0;
                }
                temp1->val = a;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            for(int i=count2;i<count1;i++){
                int a = temp1->val+carry;
                if(a>=10){
                    carry = 1;
                    a = a%10;
                }
                else{
                    carry = 0;
                }
                temp1->val = a;
                temp1 = temp1->next;
            }
            temp1 = temp3;
            if(carry==1){
                while(temp1->next!=nullptr){
                    temp1 = temp1->next;
                }
                ListNode* l3 = new ListNode(1);
                temp1->next = l3;
            }
        }
        else{
            int carry = 0;
            for(int i=0;i<count1;i++){
                int a = temp1->val+temp2->val+carry;
                if(a>=10){
                    carry = 1;
                    a = a%10;
                }
                else{
                    carry = 0;
                }
                temp2->val = a;
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            for(int i=count1;i<count2;i++){
                int a = temp2->val+carry;
                if(a>=10){
                    carry = 1;
                    a = a%10;
                }
                else{
                    carry = 0;
                }
                temp2->val = a;
                temp2 = temp2->next;
            }
            temp2 = temp4;
            if(carry==1){
                while(temp2->next!=nullptr){
                    temp2 = temp2->next;
                }
                ListNode* l3 = new ListNode(1);
                temp2->next = l3;
            }
        }
        if(count1>=count2) return temp3;
        else return temp4;
    }
};