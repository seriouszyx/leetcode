/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast && slow && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                slow = head;
                while (fast != slow) {
                    fast = fast->next;
                    slow = slow->next;
                }
                // cout << "tail connects to node index " << count << endl;
                return fast;
            }
        }
        // cout << "no cycle" << endl;
        return NULL;
    }
};

