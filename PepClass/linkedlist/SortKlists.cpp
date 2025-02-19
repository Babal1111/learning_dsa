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

    ListNode* mergeKLists(vector<ListNode*>& arr) {

        vector<int> result;
             for(auto i:arr){
            ListNode * temp = i;
         
            while(temp!=NULL){
                result.push_back(temp->val);
                temp=temp->next;
            }
        }
        sort(result.begin(),result.end());
        ListNode* dummy= new ListNode(0);
        ListNode* dummyHead = dummy;
        for(auto i:result){
            
            ListNode * node = new ListNode(i);
            dummyHead->next= node;
            dummyHead = dummyHead->next;
            // cout<<i<< " ";
        }
        // Your code here
        
        return dummy->next;
        
    }
};