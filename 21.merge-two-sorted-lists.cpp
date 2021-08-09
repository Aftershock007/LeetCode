/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (!l1 && !l2)
            return nullptr;
        if (!l1)
            return l2;
        if (!l2)
            return l1;
        ListNode *dummy = new ListNode();
        ListNode *p = l1, *q = l2, *temp = dummy;
        while (p && q)
        {
            if (p->val <= q->val)
            {
                dummy->next = p;
                p = p->next;
            }
            else
            {
                dummy->next = q;
                q = q->next;
            }
            dummy = dummy->next;
        }
        if (!p)
            dummy->next = q;
        if (!q)
            dummy->next = p;
        return temp->next;
    }
};
// @lc code=end
