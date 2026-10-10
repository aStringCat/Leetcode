#include "../../leetcode.h"

// LRU 缓存
// https://leetcode.cn/problems/lru-cache/

// 本题是设计题，力扣给出的接口是：
//     LRUCache(int capacity);
//     int get(int key);
//     void put(int key, int value);
// 把下面的类补全即可，提交时只需要这个类。
class LRUCache {
public:
    LRUCache(int capacity) {}

    int get(int key) { return -1; }

    void put(int key, int value) {}
};
