/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
 */

// @lc code=start
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
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (!head)
            return nullptr;
        if (!head->next)
            return head;
        ListNode *p = head, *q = head->next;
        while (p && q)
        {
            swap(p->val, q->val);
            if (p->next && p->next->next)
                p = p->next->next;
            else
                p = p->next;
            if (q->next && q->next->next)
                q = q->next->next;
            else
                q = q->next;
        }
        return head;
    }
};
// @lc code=end
