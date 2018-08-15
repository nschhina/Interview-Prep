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

void Partition(Node* head,int partitionValue){
  Node * head = nullptr;
  Node * headInitial = nullptr;
  Node * tail = nullptr;
  Node * tailInitial = nullptr;
  Node * curr = listhead;
  while( curr != nullptr ) {
    Node * nextNode = curr->next;
    if ( curr->data < x ) {
           if (head == nullptr) {
               head = curr;
               headInitial = head;
           }
      head->next = curr;
      head = curr;
    } else {
           if (tail == nullptr) {
               tail = curr;
               tailInitial = tail;
           }
      tail->next = curr;
      tail = curr;
    }
    curr = nextNode;
  }
  head->next = tailInitial;
  tail->next = nullptr;
  return headInitial;
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
    Partition(head);
}
