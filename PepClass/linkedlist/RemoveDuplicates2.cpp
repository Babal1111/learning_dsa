/**     Leetcode 82 
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head,*next1=NULL;
        ListNode* dummy = new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        // stNode* dummyHead = dummy;

        // if(head=NULL || head->val=head->next->val){

        // }

    while(curr!=NULL){
      if(curr->next!=NULL && curr->val==curr->next->val){
        while(curr->next!=NULL && curr->val==curr->next->val){
        prev=curr-next;
        // ListNode* temp = curr->next;
        // delete curr;
        // curr= temp;

        }
        prev->next = curr->next;
      }
      else{
        prev=prev->next;
      }
      curr=curr->next;
    }
    return dummy->next;
        
    }
};