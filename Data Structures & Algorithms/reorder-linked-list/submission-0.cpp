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
    void reorderList(ListNode* head) {
        vector<int>ans;
        vector<int>a;
        ListNode*temp=head;
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }

        int i=0;
        int j=ans.size()-1;

        while(i<=j){
            a.push_back(ans[i++]);
            if (i <= j) {
                a.push_back(ans[j--]);
            }

        }

        for(int i=0;i<a.size();i++){
            temp->val=a[i];
            temp=temp->next;
        }

    }
};
