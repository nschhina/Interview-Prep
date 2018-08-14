#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

// IF we can use addittional DS
bool isUnique(){
  string s;
  cin >> s;
  unordered_map<char,bool> map;
  int inputlength=s.length();
  for(int i=0;i<inputlength;i++){
    if(map[s[i]]){
      return false;
    }
    else{
      map[s[i]]=true;
    }
  }
  return true;
  return 0;
}
// IF we can't use addittional DS

bool isUnique(){
  string s;
  cin >> s;
  sort (s.begin(), s.end());
  for(int i=1;i<s.length();i++){
    if (s[i]==s[i-1]) return false;
  }
  return true;
}
int main() {
    cout << isUnique();
}
