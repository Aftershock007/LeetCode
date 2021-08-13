/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next)
            return head;
        ListNode *x = head;
        int count = 0;
        while (x)
        {
            count++;
            x = x->next;
        }
        k = k % count;
        while (k--)
        {
            ListNode *p = head, *q = head;
            while (q->next)
            {
                q = q->next;
                if (q->next)
                    p = p->next;
            }
            p->next = nullptr;
            q->next = head;
            head = q;
        }
        return head;
    }
};
// @lc code=end
