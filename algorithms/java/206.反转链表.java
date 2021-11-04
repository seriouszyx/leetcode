/*
 * @lc app=leetcode.cn id=206 lang=java
 *
 * [206] 反转链表
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
 // https://labuladong.gitee.io/algo/2/17/17/#一递归反转整个链表
class Solution {
    public ListNode reverseList(ListNode head) {
        // 递归实现
        // if (head == null)
        //     return null;
        // if (head.next == null) 
        //     return head;
        // ListNode last = reverseList(head.next);
        // head.next.next = head;
        // head.next = null;
        // return last;

        // 迭代实现
        if (head == null) 
            return null;
        ListNode pre = null, cur = head, nxt = head;
        while (cur != null) {
            nxt = cur.next;
            // 节点反转
            cur.next = pre;
            // 更新位置
            pre = cur;
            cur = nxt;
        }
        // 反转后的头节点
        return pre;
    }
}
// @lc code=end

