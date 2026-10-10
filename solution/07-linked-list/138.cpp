#include "../../leetcode.h"

// 随机链表的复制
// https://leetcode.cn/problems/copy-list-with-random-pointer/

// Node 是力扣原题自带的节点定义，提交时不需要复制。
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) : val(_val), next(nullptr), random(nullptr) {}
};

class Solution {
public:
    Node* copyRandomList(Node* head);
};
