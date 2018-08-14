#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

bool oneAway(){
  string s;
  string p;
  cin >> s;
  cin >> p;
  int inputlength=s.length();
  unordered_map<char,int> exists;
  for(int i=0;i<inputlength;i++){
    exists[s[i]]++;
  }
  for(int i=0;i<p.length();i++){
    exists[p[i]]--;
  }
  int seen=0;
  unordered_map<char,int>::iterator it;
  it=exists.begin();
  while(it!=exists.end()){
    if(it->second>1 || it->second<-1){
      return false;
    }
    if(it->second==1 || it->second==-1){
        if(seen==2) return false;
      seen+=1;
    }
    it++;
  }
  return true;
}

int main() {
    cout << oneAway();
}
