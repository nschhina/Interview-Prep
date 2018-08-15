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

Node* isIntersecting(Node* p, Node* q){
  Node* phead=p;
  Node* qhead=q;
  unordered_map<Node*,bool> pnodes;
  while(p!=nullptr){
    pnodes[p]=true;
    p=p->next;
  }
  while(q!=nullptr){
    if (pnodes[q]==true) return q;
    q=q->next;
  }
  return nullptr;
}
