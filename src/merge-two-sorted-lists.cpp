/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        ListNode* result = new ListNode(0);
        ListNode* cur = result;
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        while(ptr1 || ptr2)
        {
            if(ptr1 && ptr2)
            {
                if(ptr1->val < ptr2->val)
                {
                    result->val = ptr1->val;
                    ptr1 = ptr1->next?ptr1->next:NULL;
                }
                else
                {
                    result->val = ptr2->val;
                    ptr2 = ptr2->next?ptr2->next:NULL;
                }
            }
            else if(ptr1)
            {
                result->val = ptr1->val;
                ptr1 = ptr1->next?ptr1->next:NULL;
            }
            else{
                result->val = ptr2->val;
                ptr2 = ptr2->next?ptr2->next:NULL;
            }
            
            if(ptr1 || ptr2)
            {
                result->next = new ListNode(0);
                result = result->next;
            }
        }
        return cur;
    }
};
