/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
 * 链表A与链表B首尾相连，然后判断是否有环
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL || headB == NULL) return NULL;
        ListNode* ptrA = headA;
        while (ptrA->next) ptrA = ptrA->next;
        ptrA->next = headB;
        ListNode* fast = headA;
        ListNode* slow = headA;
        while (fast && slow && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                slow = headA;
                while (fast != slow) {
                    fast = fast->next;
                    slow = slow->next;
                }
                // 记得恢复原链表
                ptrA->next = NULL;
                return fast;
            }
        }
        // 记得恢复原链表
        ptrA->next = NULL;
        return NULL;
    }
};

