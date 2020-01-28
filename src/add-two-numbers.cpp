#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // 如果其中一个是空的，直接返回另一个
        if(!(l2)) return l1;
        if(!(l1)) return l2;
        int flow=0; // 进位
        ListNode* ans = new ListNode(0);
        ListNode* ptr = ans;
        while(l1 || l2)
        {
            // 分四种情况，加位
            if(l2 && l1)
            {
                ptr->val += l2->val+flow + l1->val;
            }
            else if (l1)
            {
                ptr->val += flow + l1->val;
            }
            else if(l2)
            {
                ptr->val += l2->val+flow;
            }
            else
            {
                ptr->val += flow;
            }
            // 处理进位
            if(9<ptr->val)
            {
                flow = 1;
                ptr->val -= 10;
            }
            else
            {
                flow = 0;
            }
            // 处理当其中一个链表达到尽头的情况
            if(l2)
            {
                if(l2->next) 
                {
                    l2 = l2->next;
                }
                else
                {
                    l2 = NULL;
                }
            }
            if(l1)
            {
                if(l1->next) 
                {
                    l1 = l1->next;
                }
                else
                {
                    l1 = NULL;
                }
            }
            // 结果链表添加节点
            if(l1 || l2)
            {
                ptr->next = new ListNode(0);
                ptr = ptr->next;
            }
            else if(flow)
            {
                ptr->next = new ListNode(0);
                ptr->next->val = flow;
            }
        }
        return ans;
    }
};
