/*
 * @lc app=leetcode id=86 lang=cpp
 *
 * [86] Partition List
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
    ListNode *partition(ListNode *head, int x)
    {
        if (!head || !head->next)
            return head;
        ListNode *node1 = new ListNode(), *node2 = new ListNode();
        ListNode *ptr1 = node1, *ptr2 = node2;
        while (head)
        {
            if (head->val < x)
            {
                ptr1->next = head;
                ptr1 = ptr1->next;
            }
            else
            {
                ptr2->next = head;
                ptr2 = ptr2->next;
            }
            head = head->next;
        }
        ptr2->next = NULL;
        ptr1->next = node2->next;
        return node1->next;
    }
};
// @lc code=end
