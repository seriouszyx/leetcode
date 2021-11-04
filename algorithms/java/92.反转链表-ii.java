/*
 * @lc app=leetcode.cn id=92 lang=java
 *
 * [92] 反转链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
 // https://labuladong.gitee.io/algo/2/17/17/#二反转链表前-n-个节点
class Solution {
    ListNode successor = null;
    public ListNode reverseBetween(ListNode head, int left, int right) {
        // 递归实现
        // if (left == 1)
        //     return reverseN(head, right);
        // head.next = reverseBetween(head.next, left - 1, right - 1);
        // return head;

        // 迭代实现
        ListNode dummy = new ListNode(-1);
        dummy.next = head;
        ListNode pre = dummy;
        for (int i = 0; i < left - 1; i++) {
            pre = pre.next;
        }
        ListNode p = pre;
        int cnt = left;
        ListNode cur = pre.next, nxt = pre.next;
        while (cnt++ != right + 1) {
            nxt = cur.next;
            cur.next = pre;
            pre = cur;
            cur = nxt;
        }
        p.next.next = cur;
        p.next = pre;
        return dummy.next;
    }
    public ListNode reverseN(ListNode head, int n) {
        if (n == 1) {
            successor = head.next;
            return head;
        }
        ListNode last = reverseN(head.next, n - 1);
        head.next.next = head;
        head.next = successor;
        return last;
    }
}
// @lc code=end

