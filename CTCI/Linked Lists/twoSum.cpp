/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
      2 4 3 .   5 . 6   4
 * };
 */
class Solution {
public:
    int carryout=0;
    ListNode* answer=nullptr;
    ListNode* curr=nullptr;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        while(l1 || l2){
           if(l1 && l2){
              ListNode* newNode = new ListNode((l1->val+l2->val+carryout)%10);
              newNode->next=nullptr;
              carryout=(l1->val+l2->val+carryout)/10;
              if(answer==nullptr){
                  answer=newNode;
              }
              else{
              curr->next=newNode;
              }
              curr=newNode;
              l1=l1->next;
              l2=l2->next;
           }
           else if(l1){
               ListNode* newNode = new ListNode((l1->val+carryout)%10);
               newNode->next=nullptr;
               carryout=(l1->val+carryout)/10;
              if(!answer){
                  answer=newNode;
              }
               else{
               curr->next=newNode;
              }
              curr=newNode;
              l1=l1->next;
           }
           else if(l2){
               ListNode* newNode = new ListNode((l2->val+carryout)%10);
               newNode->next=nullptr;
               carryout=(l2->val+carryout)/10;
               if(!answer){
                  answer=newNode;
              }else{
               answer->next=newNode;
               }
               curr=newNode;
               l2=l2->next;
           }
    }
        if(carryout!=0){
            ListNode* newNode = new ListNode(carryout);
            answer->next=newNode;
            newNode->next=nullptr;
        }
    return answer;
    }
};
