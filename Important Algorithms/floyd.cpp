/*
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//Complexity Space- O(1) Time- O(log N)
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fastptr=head;
        ListNode* slowptr=head;
        if(fastptr==nullptr || slowptr==nullptr) return false;
        while(fastptr->next!=nullptr && slowptr!=nullptr){
            fastptr=fastptr->next->next;
            slowptr=slowptr->next;
            if(fastptr==slowptr) return true;
            if(fastptr==nullptr || slowptr==nullptr) return false;
        }

        return false;

    }
};
