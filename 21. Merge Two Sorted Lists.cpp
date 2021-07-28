/*
Merge two sorted linked lists and return it as a sorted list.
The list should be made by splicing together the nodes of the first two lists.
*/
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == nullptr) return l2;
        if (l2 == nullptr) return l1;
        ListNode *head = new ListNode, *tail = head;
        
        while (l1 != nullptr && l2 != nullptr){
            if (l1->val < l2->val){
                tail->next = l1;
                tail = tail->next;
                l1 = l1->next;
            }
            else{
                tail->next = l2;
                tail = tail->next;
                l2 = l2->next;
            }
        }
        if (l1 == nullptr){
            tail->next = l2;
        }
        else{
            tail->next = l1;  
        }
        return head->next;
    }
};
