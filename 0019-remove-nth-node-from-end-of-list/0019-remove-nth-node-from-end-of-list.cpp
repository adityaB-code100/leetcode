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
        ListNode* temp=head;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        n=count-n+1;
        temp=head;
        ListNode* temp2=head;
        for(int i=1;i<n;i++){
        temp2=temp;
        temp=temp->next;
        }
        if(temp==head){
            return head->next;
        }
        if(temp->next==nullptr){
            temp2->next=nullptr;
            return head;
        }
        temp2->next=temp->next;

        return head;


    }
};