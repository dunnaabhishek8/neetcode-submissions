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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*head=new ListNode(-1);
        ListNode*head1=list1;
        ListNode*head2=list2;
        
        ListNode*temp=head;

         while(head1 != NULL && head2!=NULL){
            if(head1->val<=head2->val){
                ListNode*forward=head1->next;
                head->next=head1;
                head1->next=NULL;
                head1=forward;
                head=head->next;
            }
            else{
                ListNode*forward=head2->next;
                head->next=head2;
                head2->next=NULL;
                head2=forward;
                head=head->next;                
            }
         }

         if(head1==NULL){
            head->next=head2;
         }
         if(head2==NULL){
            head->next=head1;
         }
           
        return temp->next;
    }
};
