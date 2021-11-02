/*
 * @lc app=leetcode id=143 lang=cpp
 *
 * [143] Reorder List
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
    void reorderList(ListNode *head)
    {
        if (!head || !head->next)
            return;
        ListNode *slow = head, *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *prev = nullptr, *curr = slow, *next;
        while (curr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        ListNode *n1 = head, *n2 = prev;
        while (n2->next)
        {
            next = n1->next;
            n1->next = n2;
            n1 = next;
            next = n2->next;
            n2->next = n1;
            n2 = next;
        }
    }
};
// @lc code=end
