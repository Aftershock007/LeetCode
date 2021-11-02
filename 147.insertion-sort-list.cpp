/*
 * @lc app=leetcode id=147 lang=cpp
 *
 * [147] Insertion Sort List
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
    ListNode *insertionSortList(ListNode *head)
    {
        if (!head)
            return nullptr;
        ListNode *tail = head, *curr, *itr;
        while (tail->next)
        {
            if (tail->val <= tail->next->val)
            {
                tail = tail->next;
                continue;
            }
            curr = tail->next;
            tail->next = curr->next;
            if (curr->val < head->val)
            {
                curr->next = head;
                head = curr;
                continue;
            }
            itr = head;
            while (itr != tail)
            {
                if (curr->val < itr->next->val)
                {
                    curr->next = itr->next;
                    itr->next = curr;
                    break;
                }
                itr = itr->next;
            }
        }
        return head;
    }
};
// @lc code=end
