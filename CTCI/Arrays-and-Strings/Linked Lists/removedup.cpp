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

void removedup(Node* head){
  Node* prev;
  unordered_map<int,bool> occurences;
  while(head!=nullptr){
    if occurences.find(head->val)
    
  }

}


int main() {
    Node* head;
    Node* newNode3 = new Node;
    Node->val=23;
    Node->next=nullptr;
    Node* newNode2 = new Node;
    Node->val=19;
    Node->next=newNode3;
    Node* newNode1 = new Node;
    Node->val=23;
    Node->next=newNode2;
    Node* newNode = new Node;
    Node->val=17;
    Node->next=newNode1;
    head= newNode;

    removedup(head);
}
