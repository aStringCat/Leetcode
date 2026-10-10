#include "../../leetcode.h"

// LFU 缓存
// https://leetcode.cn/problems/lfu-cache/

// 本题是设计题，力扣给出的接口是：
//     LFUCache(int capacity);
//     int get(int key);
//     void put(int key, int value);
// 把下面的类补全即可，提交时只需要这个类。
class LFUCache {
public:
    LFUCache(int capacity) {}

    int get(int key) { return -1; }

    void put(int key, int value) {}
};
