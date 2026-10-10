#include "../../leetcode.h"

// 从前序与中序遍历序列构造二叉树
// https://leetcode.cn/problems/construct-binary-tree-from-preorder-and-inorder-traversal/

class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
};
