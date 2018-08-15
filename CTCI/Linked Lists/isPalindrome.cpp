#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

struct Node
{
  int val;
  Node *next;
};
bool isPalindromeRecurHelper( Node * & left, Node * right ) {
  if ( right == nullptr ) {
    return true;
  }
  bool isPalindrome = isPalindromeRecurHelper(left, right->next);
  if (!isPalindrome) {
    return false;
  }
  isPalindrome = ( left->data == right->data );
  left = left->next;
  return isPalindrome;
}

bool isPalindromeRecur( Node * head ) {
  return isPalindromeRecurHelper(head, head);
}


int main() {
    Node* head;
    Node* newNode3 = new Node;
    newNode3->val=17;
    newNode3->next=NULL;
    Node* newNode2 = new Node;
    newNode2->val=17;
    newNode2->next=newNode3;
    Node* newNode1 = new Node;
    newNode1->val=23;
    newNode1->next=newNode2;
    Node* newNode = new Node;
    newNode->val=23;
    newNode->next=newNode1;
    head= newNode;
    cout << isPalindrome(head);
}
