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
  Node* curr;
  curr=head;
  unordered_map<int,bool> occurences;
  while(curr!=NULL){
    if (occurences[(int)curr->val]==true){
      prev->next=curr->next;
      curr=curr->next;
    }
    else{
    occurences[curr->val]=true;
    prev=curr;
    curr=curr->next;
    }
  }
  while(head!=NULL){
    cout << head->val << endl;
    head=head->next;
  }

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
    removedup(head);
}
