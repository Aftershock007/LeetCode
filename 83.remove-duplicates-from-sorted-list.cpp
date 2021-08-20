/*
 * @lc app=leetcode id=83 lang=cpp
 *
 * [83] Remove Duplicates from Sorted List
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head || !head->next)
            return head;
        ListNode *p = head, *q = head->next;
        while (q)
        {
            if (p->val == q->val)
            {
                q = q->next;
            }
            else
            {
                p->next = q;
                p = q;
                if (q->next)
                    q = q->next;
            }
        }
        p->next = nullptr;
        return head;
    }
};
// @lc code=end
