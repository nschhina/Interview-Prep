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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr) return true;
        ListNode* front=head;
        ListNode* slowptr=head;
        ListNode* fastptr=head;
        while(fastptr->next!=nullptr){
            fastptr=fastptr->next->next;
            slowptr=slowptr->next;
            if(!fastptr) break;
        }
        if(fastptr) slowptr = slowptr->next;
        ListNode* mid=slowptr;
        reverseList(mid->next);
        while(head!=slowptr){
            if(head->val!=mid->val) return false;
            head=head->next;
            mid=mid->next;
        }
        return true;
    }
private:
    void reverseList(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr=head;
        while(curr!=nullptr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
    }
};
