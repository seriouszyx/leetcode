/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第N个节点
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * 设置快慢指针，先让快指针走N步，然后两个指着一起走
 * 注意"[1],1"删除第一个元素的特殊情况
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* cur = head;
        ListNode* tag = head;
        for (int i = 0; i < n; i++) tag = tag->next;
        while (tag && tag->next) {
            cur = cur->next;
            tag = tag->next;
        }
        ListNode* node_to_delete = NULL;
        if (tag) {
            node_to_delete = cur->next;
            cur->next = cur->next->next;
        } else {
            node_to_delete = cur;
            head = head->next;
        }
        delete node_to_delete;
        return head;
    }
};

