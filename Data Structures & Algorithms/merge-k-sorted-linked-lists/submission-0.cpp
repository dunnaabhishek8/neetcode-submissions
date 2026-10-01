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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector<int>ans;

        for(int i=0;i<lists.size();i++){
            ListNode* j=lists[i];
            while(j!=NULL){
                ans.push_back(j->val);
                j=j->next;
            }
        }
        sort(ans.begin(),ans.end());

        ListNode*head=new ListNode(-1);
        ListNode*tail=head;
        for(int i=0;i<ans.size();i++){
            ListNode*temp=new ListNode(ans[i]);
            tail->next=temp;
            tail=tail->next;
        }

        return head->next;
          
    }
};
