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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* front = dummy;
        ListNode* back = dummy;
        int cnt = n+1;
        while(cnt)
        {
            back = back->next;
            cnt--;
        }
        while(back)
        {
            if(back->next)
            {
                back = back->next;
                front = front->next;
            }
            else
            {
                front = front->next;
                break;
            }
        }
        front->next = front->next->next;
        return dummy->next;
    }

};
