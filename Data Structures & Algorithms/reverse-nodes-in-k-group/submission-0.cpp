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
    
    ListNode* reverse(ListNode* head, int k){

        if(head==NULL){
            return NULL;
        }

        int size=0;
        ListNode*ans=head;
        while(ans!=NULL){
          ans=ans->next;
          size++;
        }
        if(size<k){
            return head;
        }

        ListNode*forward=NULL;
        ListNode*curr=head;
        ListNode*prev=NULL;

        size=0;
        while(curr != NULL && size<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            size++;
        }

        if(forward !=NULL){
            head->next=reverse(forward,k);
        }
        return prev;
    }
    
    int size(ListNode*head){
        ListNode*curr=head;
        int n=1;
        while(curr!=NULL){
           curr=curr->next;
           n++;
        }
        return n;
    }


    ListNode* reverseKGroup(ListNode* head, int k) {

        return reverse(head,k);
    }
};
