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
        int cnt = 0;
        ListNode* cur = dummy;
        while(cur)
        {
            cur = cur->next?cur->next:NULL;
            cnt++;
        }
        cout<<cnt<<endl;
        cur = dummy;
        cnt -= n+1;
        cout<<cnt<<endl;
        while(cnt)
        {
            cur = cur->next;
            cnt--;
        }
        cur->next = cur->next->next;
        return dummy->next;
    }
};
