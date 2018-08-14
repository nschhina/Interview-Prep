#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindromicPermutation(){
  string s;
  cin >> s;
  int inputlength=s.length();
  unordered_map<char,bool> exists;
  for(int i=0;i<inputlength;i++){
    if(exists[s[i]]==true){
      exists[s[i]]=false;
    }
    else{
      exists[s[i]]=true;
    }
  }
  unordered_map<char, bool>::iterator it = exists.begin();
  bool seen=false;
  while(it!= exists.end()){
    if(it->second==true){
      if(seen) return false;
      seen=true;
    }
    it++;
  }
  return true;

}

int main() {
    cout << isPalindromicPermutation();
}
