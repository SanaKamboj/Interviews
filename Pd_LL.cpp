/ **
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slowHead = head;
        ListNode *fastHead = head;
        std::stack<int> mystack;
        while(fastHead != NULL && fastHead->next != NULL){
            mystack.push(slowHead->val);
            slowHead = slowHead->next;
            fastHead = fastHead->next->next;
        }
        
        if(fastHead != NULL){
            slowHead = slowHead->next; 
        }
        
        while(slowHead != NULL){
            int top = mystack.top();
            mystack.pop();
            if(top != slowHead->val){
                return false;
            }
            slowHead = slowHead->next;
        }
        return true;
    }
};
