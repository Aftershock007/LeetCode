/*
 * @lc app=leetcode id=148 lang=cpp
 *
 * [148] Sort List
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
    void MidNode(ListNode *curr, ListNode **first, ListNode **second)
    {
        ListNode *slow = curr, *fast = curr->next;
        while (fast)
        {
            fast = fast->next;
            if (fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
        }
        *first = curr;
        *second = slow->next;
        slow->next = nullptr;
    }
    ListNode *MergeBoth(ListNode *first, ListNode *second)
    {
        ListNode *ans = nullptr;
        if (!first)
            return second;
        if (!second)
            return first;
        if (first->val < second->val)
        {
            ans = first;
            ans->next = MergeBoth(first->next, second);
        }
        else
        {
            ans = second;
            ans->next = MergeBoth(first, second->next);
        }
        return ans;
    }
    void MergeSort(ListNode **head)
    {
        ListNode *curr = *head;
        if (!curr || !curr->next)
            return;
        ListNode *first, *second;
        MidNode(curr, &first, &second);
        MergeSort(&first);
        MergeSort(&second);
        *head = MergeBoth(first, second);
    }
    ListNode *sortList(ListNode *head)
    {
        MergeSort(&head);
        return head;
    }
};
// @lc code=end
