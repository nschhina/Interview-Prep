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

bool isIntersecting(Node* p, Node* q){
  Node* phead=p;
  Node* qhead=q;
  unordered_map<Node*,bool> pnodes;
  while(p!=nullptr){
    pnodes[p]=true;
    p=p->next;
  }
  while(q!=nullptr){
    if (pnodes[q]==true) return true;
    q=q->next;
  }
  return false;
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
    removedup(head,head);
}
