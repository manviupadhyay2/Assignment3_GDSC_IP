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
    ListNode* sortList(ListNode* head) {
       
       if(head==NULL)
       return head;

        ListNode* temp=head;
       
        vector<int> v;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        delete(temp);
        sort(v.begin(),v.end());
        ListNode* dummy=new ListNode(v[0]);

        head=dummy;
        for(auto i:v){
            ListNode* t=new ListNode(i);
            dummy->next=t;
            dummy=dummy->next;
        }
        return head->next;
    }
};