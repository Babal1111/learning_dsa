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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *prev=NULL , *temp= head;
        while(temp!=NULL){

            if(prev!=NULL && prev->val == temp->val){
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }else{
                prev= temp;
                temp=temp->next;
            }
        }

        // while(temp!=NULL){
        //     prev = NULL;
        //     temp=temp->next;
        //     if(prev!=NULL && prev->val == temp->val){
        //          prev->next = temp->next;
        //         delete temp;
        //         temp = prev->next;

        //     }

        // }

    
        
    
        return head;
    }

};