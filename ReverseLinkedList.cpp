/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 **/
Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *current = head;
        std::stack<int> mystack;
        while(current != NULL){
            mystack.push(current->val);
            current = current->next;
        }
        ListNode *cur = head;
        while(cur != NULL){
            int value = mystack.top();
            mystack.pop();
            cur->val = value;
            cur = cur->next;
        }
        return head;
    }
};

/* public ListNode reverseList(ListNode head) {
    ListNode prev = null;
    ListNode curr = head;
    while (curr != null) {
        ListNode nextTemp = curr.next;
        curr.next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}
public ListNode reverseList(ListNode head) {
    if (head == null || head.next == null) return head;
    ListNode p = reverseList(head.next);
    head.next.next = head;
    head.next = null;
    return p;
} */
