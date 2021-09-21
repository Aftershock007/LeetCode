/*
 * @lc app=leetcode id=117 lang=cpp
 *
 * [117] Populating Next Right Pointers in Each Node II
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
    Node *connect(Node *root)
    {
        if (!root)
            return nullptr;
        queue<Node *> qt;
        qt.push(root);
        while (!qt.empty())
        {
            int n = qt.size();
            while (n--)
            {
                Node *temp = qt.front();
                qt.pop();
                temp->next = qt.front();
                if (n == 0)
                    temp->next = nullptr;
                if (temp->left)
                    qt.push(temp->left);
                if (temp->right)
                    qt.push(temp->right);
            }
        }
        return root;
    }
};
// @lc code=end
