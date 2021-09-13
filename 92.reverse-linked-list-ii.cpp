/*
 * @lc app=leetcode id=92 lang=cpp
 *
 * [92] Reverse Linked List II
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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        if (!head || !head->next)
            return head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *It = dummy, *prevIt;
        for (int i = 0; i < left; i++)
        {
            prevIt = It;
            It = It->next;
        }
        ListNode *ItR = It, *prevR = prevIt;
        for (int i = left; i <= right; i++)
        {
            ListNode *forward = ItR->next;
            ItR->next = prevR;
            prevR = ItR;
            ItR = forward;
        }
        prevIt->next = prevR;
        It->next = ItR;
        return dummy->next;
    }
};
// @lc code=end
