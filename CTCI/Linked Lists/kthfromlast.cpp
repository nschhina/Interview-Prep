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

int kthfromlast(Node* head){
  int K;
  cin >> K;
  Node* prev;
  Node* curr;
  curr=head;
  unordered_map<int,int> occurences;
  int index=0;
  while(curr!=NULL){
    occurences[index]=curr->val;
    curr=curr->next;
    index++;
  }
    return occurences[index-K];

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
    cout << kthfromlast(head);
}
